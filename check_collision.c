/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 10:47:31 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 09:49:43 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



static int	pos_x(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{
	int		i;

	i = 0;
	while (i < ABS(offset_x) || i < ABS(offset_y))
	{
		if (offset_y >= 0) //prev->str[i + y][i + x]
		{
			
		}
		if (offset_y < 0) //pre
		{
			
		}










		i++;
	}
}

static int	neg_x(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{

}

static int	collide(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{
	curr->from_y = (offset_y >= 0 ? 0 : -offset_y);
	prev->from_y = (offset_y >= 0 ? -offset_y : 0);
	curr->from_x = (offset_x >= 0 ? 0 : -offset_x);
	prev->from_x = (offset_x >= 0 ? -offset_x : 0);
	curr->to_y = (offset_y >= 0 ? 3 - offset_y : offset_y);
	prev->to_y = (offset_y >= 0 ? offset_y : 3 - offset_y);
	curr->to_x = (offset_x >= 0 ? 3 - offset_x : offset_x);
	prev->to_x = (offset_x >= 0 ? offset_x : 3 - offset_x);

	return (neg_x(prev, curr, offset_x, offset_y));
}

int			no_collision(t_tmino **tab_tmino, int pos)
{
	int i;
	int offset_x;
	int offset_y;

	i = 0;
	while (i < pos)
	{
		offset_x = tab_tmino[pos]->x - tab_tmino[i]->x;
		offset_y = tab_tmino[pos]->y - tab_tmino[i]->y;
		if (ABS(tab_tmino[i]->x - tab_tmino[pos]->x) > 3)
			return (0);
		if (ABS(tab_tmino[i]->y - tab_tmino[pos]->y) > 3)
			return (0);
		if (collide(tab_tmino[i], tab_tmino[pos], offset_x, offset_y))
			return(0);
		i++;
	}
	return (1);
}
