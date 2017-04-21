/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:11:07 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 09:52:54 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_str_tab(char **tab)
{
	int i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

void	free_tab_tmino(t_tmino **tmino)
{
	int	i;

	i = -1;
	while (tmino[++i])
	{
		free_str_tab(tmino[i]->str);
		free(tmino[i]);
	}
}

void	free_env(t_env *env)
{
	free_tab_tmino(env->tab_tmino);
	free_str_tab(env->grid);
	free(env);
}
