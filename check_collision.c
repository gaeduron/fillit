/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 10:47:31 by gduron            #+#    #+#             */
/*   Updated: 2017/04/19 10:00:48 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_inter(t_tmino *prev, t_tmino *curr)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= (3 - prev->offset_x) && j <= (3 - prev->offset_y))
	{
		if (prev->str[prev->i_y + j][prev->i_x + i] ==\
				curr->str[curr->i_y + j][curr->i_x + i] \
				&& curr->str[curr->i_y + j][curr->i_x + i] == '#')
		{
			return (1);
		}
		i++;
		if (i > (3 - prev->offset_x) && j < (3 - prev->offset_x))
		{
			i = 0;
			j++;
		}
	//	printf("\ni = %d and j = %d\n", i, j);
	}
	return (0);
}

static int	collide(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{
	curr->i_y = (offset_y >= 0 ? 0 : -offset_y);
	prev->i_y = (offset_y >= 0 ? -offset_y : 0);
	curr->i_x = (offset_x >= 0 ? 0 : -offset_x);
	prev->i_x = (offset_x >= 0 ? -offset_x : 0);
	prev->offset_y = (offset_y < 0 ? -offset_y : offset_y);
	prev->offset_x = (offset_x < 0 ? -offset_x : offset_x);
	return (check_inter(prev, curr));
}

int			no_collision(t_tmino **tab_tmino, int pos)
{
	int i;
	int offset_x;
	int offset_y;

	i = 0;
	if (pos == 0)
		return (1);
	while (i < pos)
	{
		offset_x = tab_tmino[pos]->x - tab_tmino[i]->x;
		offset_y = tab_tmino[pos]->y - tab_tmino[i]->y;
		if ((offset_x < 0 ? -offset_x : offset_x) > 3)
			return (1);
		if ((offset_x < 0 ? -offset_y : offset_y) > 3)
			return (1);
		if (collide(tab_tmino[i], tab_tmino[pos], offset_x, offset_y))
			return (0);
		i++;
	}
	return (1);
}
