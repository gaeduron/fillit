/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 11:05:50 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/20 11:42:09 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	write_grid(t_tmino *tmino, char **grid, char *letter, int pos)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++j < 4)
	{
		while (++i < 4)
		{
			if (tmino->str[j][i] == '#')
			{
				grid[tmino->best_y + j][tmino->best_x + i] = letter[pos];
			}
		}
		i = -1;
	}
}

void    print_grid(t_env *env)
{
	char	*letter;
	int		i;

	i = -1;
	letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (env->tab_tmino[++i])
		write_grid(env->tab_tmino[i], env->grid, letter, i);
}
