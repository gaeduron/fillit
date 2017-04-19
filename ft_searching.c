/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searching.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 10:30:56 by gduron            #+#    #+#             */
/*   Updated: 2017/04/19 14:04:42 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	save_solution(t_env env)
{
	if ()
}

void	recursive_search(t_env *env, int pos)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < env->grid_size && j < env->grid_size)
	{
		env->tab_tmino[pos]->x = i;
		env->tab_tmino[pos]->y = j;
		if (no_collision(env->tab_tmino, pos, env->grid_size))
		{
			if (pos < env->grid_size - 1)
				recursive_search(env, pos + 1)
			else
				save_solution(env);
		}
	}
}

void	ft_searching(t_env *env)
{
	while (env->grid_size < 12 && !env->best_size)
		recursive_search(env, 0);
}
