/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:30:56 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 14:52:39 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	save_solution(t_env *env)
{
	int i;

	i = -1;
//	printf("best_size = %d\n", env->best_size);
	if (env->best_size == 0)
	{
		while (env->tab_tmino[++i])
		{
//			printf("best_x = %d || best_y = %d\n", env->tab_tmino[i]->x, env->tab_tmino[i]->y);
			env->tab_tmino[i]->best_x = env->tab_tmino[i]->x;
			env->tab_tmino[i]->best_y = env->tab_tmino[i]->y;
		}
		env->best_size = env->grid_size;
//		printf("best_size = %d\n", env->best_size);
	}
}

void	recursive_search(t_env *env, int pos)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++j < env->grid_size)
	{
		env->tab_tmino[pos]->y = j;
		while (++i < env->grid_size && !env->best_size)
		{
//			printf("grid_size = %d and pos = %d\n", env->grid_size, pos);
			env->tab_tmino[pos]->x = i;
//			printf("i = %d && j = %d\n", i, j);
			if (no_collision(env->tab_tmino, pos, env->grid_size))
			{
				if (env->tab_tmino[pos + 1])
					recursive_search(env, pos + 1);
				else
					save_solution(env);
			}
		}
		i = -1;
	}
}

void	ft_searching(t_env *env)
{
	int i;

	i = -1;
	while (env->grid_size < 12 && !env->best_size)
	{
		recursive_search(env, 0);
		while (env->tab_tmino[++i])
		{
			env->tab_tmino[i]->x = 0;
			env->tab_tmino[i]->y = 0;
		}
		i = -1;
		env->grid_size++;
	}
}
