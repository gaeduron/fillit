/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:26:21 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 13:59:04 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		init_grid(t_env *env)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
	if (!(env->grid = (char**)malloc(sizeof(char*) * (env->best_size + 1))))
		return (0);
	env->grid[env->best_size] = 0;
	while (++k < env->best_size)
	{
		if (!(env->grid[k] = (char*)malloc(sizeof(char) *\
						(env->best_size + 1))))
			return (0);
		env->grid[k][env->best_size] = 0;
	}
	while (++j < env->best_size)
	{
		while (++i < env->best_size)
			env->grid[j][i] = '.';
		i = -1;
	}
	return (1);
}
