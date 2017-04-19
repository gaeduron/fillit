/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 15:16:37 by gduron            #+#    #+#             */
/*   Updated: 2017/04/19 10:28:34 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	do_fillit(int fd)
{
	char	*input_str;
	t_env	*env;
	int		i;

	i = -1;
	input_str = read_file_desctriptor(fd);
	if (!(input_str) || *input_str == '\0')
	{
		write(1, "error\n", 6);
		return ;
	}
	if (!(env = init_t_env(input_str)))
	{
		write(1, "error\n", 6);
		return ;
	}
	free(input_str);
//	ft_searching(env);
//	write_t_tmino(env);
//	print_grid(env);
//	free_env(env);
		while (env->tab_tmino[++i])
	{
		printf("\nI am in the right place ? %d\n____", no_collision(env->tab_tmino, i));
		printf("\n");
		ft_putchartab(env->tab_tmino[i]->str, 't');
	}
	return ;
}
