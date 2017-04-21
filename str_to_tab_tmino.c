/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mino2tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:01:15 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/21 10:06:17 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nbr_mino(char *str)
{
	int nbr;
	int mino;

	nbr = 1;
	mino = 1;
	while (*str)
	{
		if (*str == '\n')
			nbr++;
		if (nbr == 5 && *(str + 1))
		{
			nbr = 0;
			*str = '$';
			mino++;
		}
		str++;
	}
	return (mino);
}

t_tmino	**init_tab_tmino(char **tab, int mino_nbr)
{
	t_tmino	**mino;
	int		i;

	i = -1;
	if (!(mino = (t_tmino **)malloc(sizeof(t_tmino *) * (mino_nbr + 1))))
		return (NULL);
	mino[mino_nbr] = 0;
	while (++i < mino_nbr)
		mino[i] = init_t_tmino(tab[i]);
	return (mino);
}

t_tmino	**str_to_tab_tmino(char *str)
{
	char	**tab;
	t_tmino	**tab_t_tmino;
	int		mino_nbr;
	int		fd;

	mino_nbr = nbr_mino(str);
	tab = ft_strsplit(str, '$');
	tab_t_tmino = init_tab_tmino(tab, mino_nbr);
	return (tab_t_tmino);
}
