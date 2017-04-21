/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 15:16:37 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 11:22:30 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_all(char *str, char **tab, t_env *env)
{
	free(str);
	free_env(env);
	free(tab);
	return ;
}

void	do_fillit(int fd, int ref)
{
	char	**str_tab;
	char	*str;
	t_env	*env;
	int		i;

	i = -1;
	str_tab = checkin(read_file_desctriptor(fd), read_file_desctriptor(ref));
	if (!(str_tab))
	{
		write(1, "error\n", 6);
		return ;
	}
	str = join_tab(str_tab);
	if (!(env = init_t_env(str)))
	{
		write(1, "error\n", 6);
		return ;
	}
	ft_searching(env);
	if (!init_grid(env))
		return ;
	print_grid(env);
	ft_putchartab(env->grid, 't');
	free_all(str, str_tab, env);
	return ;
}
