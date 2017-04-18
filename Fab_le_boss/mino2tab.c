/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mino2tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:01:15 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 09:08:34 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"
#define BUFF_SIZE 5000

static int		nb_mino(char *str)
{
	int nb;
	int mino;

	nb = 0;
	mino = 0;
	while (*str)
	{
		if (*str == '\n')
			nb++;
		if (nb == 5)
		{
			nb = 0;
			*str = '$';
			mino++;
		}
		str++;
	}
	return (mino);
}

int		main()
{
	char **tab;
	char *buff;
	int mino;
	int fd;
	int i;

	i = 0;
	if ((fd = open("valid_sample", O_RDONLY)) < 0)
	{
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	if (!(buff = ft_strnew(BUFF_SIZE)))
	{
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	read(fd, buff, BUFF_SIZE);
	mino = nb_mino(buff);
//	tab = ft_strsplit(buff, '$');

	/*while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}*/
	printf("%s\n", buff);
	printf("nb mino: %d\n", mino);
	return (0);
}
