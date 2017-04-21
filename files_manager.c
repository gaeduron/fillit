/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 17:12:24 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 13:50:26 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	open_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "error\n", 6);
		return ;
	}
	do_fillit(fd);
	close(fd);
}

void	files_manager(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
		open_file(av[i++]);
}
