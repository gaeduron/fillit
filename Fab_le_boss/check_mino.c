/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:02:05 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/19 19:49:18 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"

#include <stdio.h>

int		*search_hash(char *str, int n)
{
	int i;
	int x;
	int y;
	int *tab;

	i = 0;
	x = 0;
	y = 0;
	tab = (int *)malloc(sizeof(int) * 2);
	while (n && str[i])
	{
		if (str[i] == '\n')
			x++;
		if (str[i] == '#')
			n--;
		y = i % 5;
		i++;
	}
	tab[0] = x;
	tab[1] = y;
	return (tab);
}

t_valid	*mino_struct(char *str)
{
	t_valid *mino;
	int *pos1;
	int *pos2;
	int *pos3;
	int *pos4;

	mino = (t_valid *)malloc(sizeof(t_valid));
	pos1 = search_hash(str, 1);
	pos2 = search_hash(str, 2);
	pos3 = search_hash(str, 3);
	pos4 = search_hash(str, 4);
	mino->pos1[0] = pos1[0];
	mino->pos1[1] = pos1[1];
	mino->pos2[0] = pos2[0];
	mino->pos2[1] = pos2[1];
	mino->pos3[0] = pos3[0];
	mino->pos3[1] = pos3[1];
	mino->pos4[0] = pos4[0];
	mino->pos4[1] = pos4[1];
	return (mino);
}

int		check_str(char *str)
{
	int i;
	int hash;
	int hei;

	i = 0;
	hash = 0;
	hei = 0;
	if (ft_strlen(str) != 20)
		return (0);
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '#')
			hash++;
		if (str[i] == '\n')
			hei++;
		i++;
	}
	if (hash != 4 || hei != 4)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	int fd;
	int nb;
	char *buff;
	char **tab;
	int **tab_int;
	int i;
	int j;
	t_valid **valid;

	i = 0;
	nb = 0;
	fd = open(av[1], O_RDONLY);
	buff = ft_strnew(5000);
	read(fd, buff, 5000);
	//printf("%s\n", buff);
	nb = nb_mino(buff);
	//printf("%s\n", buff);
	tab = ft_strsplit(buff, '$');
	while (tab[i])
	{
		if (check_str(tab[i]))
			printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	valid = (t_valid **)malloc(sizeof(t_valid *) * nb);
	while (i < nb)
	{
		valid[i] = mino_struct(tab[i]);
		printf("valid[%d] %d%d %d%d %d%d %d%d\n", i, valid[i]->pos1[0], valid[i]->pos1[1], valid[i]->pos2[0], \
				valid[i]->pos2[1], valid[i]->pos3[0], valid[i]->pos3[1], \
				valid[i]->pos4[0], valid[i]->pos4[1]);
		i++;
	}
	printf("valide ? %d", fun_tab(tab[0]));
	return (0);
}
