/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 10:47:31 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 16:43:43 by gduron           ###   ########.fr       */
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
		if (prev->str[prev->i_y + j][prev->i_x + i] == \
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
	}
	return (0);
}

static int	collide(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{
	curr->i_y = (offset_y >= 0 ? 0 : -offset_y);
	prev->i_y = (offset_y >= 0 ? offset_y : 0);
	curr->i_x = (offset_x >= 0 ? 0 : -offset_x);
	prev->i_x = (offset_x >= 0 ? offset_x : 0);
	prev->offset_y = (offset_y < 0 ? -offset_y : offset_y);
	prev->offset_x = (offset_x < 0 ? -offset_x : offset_x);
	return (check_inter(prev, curr));
}

int			out_of_the_grid(t_tmino *tmino, int size)
{
	int i;
	int sol;

	i = 0;
	sol = 0;
	while (((size - tmino->x <= 3) || (size - tmino->y <= 3)) && i < 4)
	{
		if (size - tmino->x <= 3)
		{
			sol = tmino->str[i][size - tmino->x] == '#' ? 1 : 0;
			if (sol == 1)
				return (1);
		}
		if (size - tmino->y <= 3)
		{
			sol = tmino->str[size - tmino->y][i] == '#' ? 1 : 0;
			if (sol == 1)
				return (1);
		}
		i++;
	}
	return (0);
}

int			no_collision(t_tmino **tab_tmino, int pos, int size)
{
	int i;
	int offset_x;
	int offset_y;

	i = 0;
	while (i < pos || i == 0)
	{
		offset_x = tab_tmino[pos]->x - tab_tmino[i]->x;
		offset_y = tab_tmino[pos]->y - tab_tmino[i]->y;
		if (out_of_the_grid(tab_tmino[pos], size))
			return (0);
		if ((offset_x < 0 ? -offset_x : offset_x) > 3)
			i++;
		else if ((offset_y < 0 ? -offset_y : offset_y) > 3)
			i++;
		else
		{
			if (collide(tab_tmino[i], tab_tmino[pos], offset_x, offset_y) \
					&& pos > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
