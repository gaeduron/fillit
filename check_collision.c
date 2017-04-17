/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 10:47:31 by gduron            #+#    #+#             */
/*   Updated: 2017/04/17 12:13:19 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */







static int	collide(t_tmino *prev, t_tmino *curr, int offset_x, int offset_y)
{
	if (offset_x >= 0)
	{
		if (offset_y >= 0)
			return ();
		if (offset_y < 0)
			return ();
	}
	if (offset_x < 0)
	{
		if (offset_y >= 0)
		{


		}
		if (offset_y < 0)
		{
		
		
		}
	}
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
