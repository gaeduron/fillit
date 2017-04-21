/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:02:05 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/21 14:43:04 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nb_mino(char *str)
{
	int nb;
	int mino;

	nb = 0;
	mino = 1;
	while (*str)
	{
		if (*str == '\n')
			nb++;
		if (nb == 5 && *(str + 1))
		{
			nb = 0;
			*str = '$';
			mino++;
		}
		str++;
	}
	return (mino);
}

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
	t_valid	*mino;
	int		*pos1;
	int		*pos2;
	int		*pos3;
	int		*pos4;

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

char	**checkin(char *mino, char *f_mino)
{
	int		i;
	char	**tab;
	char	**tab2;
	int		nb;

	i = 0;
	nb = 0;
	if (!mino || !f_mino)
		return (0);
	if (*mino == '\0')
		return (0);
	nb = nb_mino(mino);
	nb_mino(f_mino);
	tab = ft_strsplit(mino, '$');
	tab2 = ft_strsplit(f_mino, '$');
	while (tab[i])
	{
		if (!check_str(tab[i]) || !fun_tab(tab[i], tab2))
			return (0);
		tab[i] = fun_tab(tab[i], tab2);
		i++;
	}
	return (tab);
}
