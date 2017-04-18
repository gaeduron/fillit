/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mino2tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:01:15 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 14:09:00 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"
#define BUFF_SIZE 5000

int		nb_mino(char *str)
{
	int nb;
	int mino;

	nb = 1;
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

void	write_mino(t_tmino *mino, char **grid)
{
	char **ptr;
	int i;
	int j;

	i = 0;
	j = 0;
	ptr = grid;
	ptr = ptr + mino->y;
	*ptr = *ptr + mino->x;
	while (mino->str[j] && ptr[j])
	{
		i = 0;
		while (mino->str[j][i] && ptr[j][i])
		{
			if (mino->str[j][i] == '#')
				ptr[j][i] = mino->str[j][i];
			i++;
		}
		j++;
	}
}

t_tmino	**init_tmino(char **tab, int nb_mino)
{
	t_tmino **mino;
	int i;

	i = 0;
	if (!(mino = (t_tmino **)malloc(sizeof(t_tmino *) * (nb_mino + 1))))
		return (NULL);

	return (mino);
}

int		main(int ac, char **av)
{
	char **tab;
	char *buff;
	int mino;
	int fd;
	int i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	buff = ft_strnew(BUFF_SIZE);
	read(fd, buff, BUFF_SIZE);
	mino = nb_mino(buff);
	tab = ft_strsplit(buff, '$');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s\n", buff);
	printf("nb mino: %d\n", mino);
	return (0);
}
