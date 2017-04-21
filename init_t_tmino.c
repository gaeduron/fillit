/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_tmino.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 13:01:44 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 17:48:25 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tmino		*init_t_tmino(char *str)
{
	t_tmino *elem;

	if (!(elem = (t_tmino*)malloc(sizeof(t_tmino))))
		return (0);
	elem->str = ft_strsplit(str, '\n');
	elem->x = 0;
	elem->y = 0;
	elem->best_x = 0;
	elem->best_y = 0;
	elem->i_x = 0;
	elem->i_y = 0;
	elem->offset_x = 0;
	elem->offset_y = 0;
	return (elem);
}
