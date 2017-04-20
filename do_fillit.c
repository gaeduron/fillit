/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 15:16:37 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 14:02:18 by gduron           ###   ########.fr       */
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
		free(input_str);
		return ;
	}
	if (!(env = init_t_env(input_str)))
	{
		write(1, "error\n", 6);
		return ;
	}
	free(input_str);
	ft_searching(env);
	if (!init_grid(env))
		return ;
	print_grid(env);
	ft_putchartab(env->grid, 't');
//	free_env(env);
	return ;
}
