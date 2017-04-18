/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 13:22:30 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 13:56:48 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_env	*init_t_env(char *input_str)
{
	t_env	*env;

	if (!(env = (t_env*)malloc(sizeof(t_env))))
		return (0);
	if (env->tab_tmino = str_to_tab_tmino(*input_str))
		return (0);
	env->grid = 0;
	env->grid_size = 4;
	return (env);
}
