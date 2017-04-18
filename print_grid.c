/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 11:05:50 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 11:24:10 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	write_grid(t_env *env, char *letter)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	
	if (env->grid[y + j][x + j] == '.' &&\
			env->tab_tmino[i]->str[x + j][y + j] == '#')
		env->grid[y + j][x + j] = letter[j];
	//write each t_tmino in env->grid
}

void    print_grid(t_env *env)
{
	char letter[26];

	letter = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',\
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	write_grid(t_env *env, letter);
	print_tab(env->grid);
}
