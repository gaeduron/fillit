/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:02:05 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 16:33:11 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"

typedef struct s_valid
{
	int		heigh;
	int		length;
	char	*str;
	int		pos1;
	int		pos2;
	int		pos3;
	int		pos4;
}				t_valid;

int		check_tmino(char *mino, t_valid **valid_mino)
{
	return (1);
}

int		check_str(char *mino, t_valid *valid_mino, t_valid **tab_mino)
{
	int i;
	int hei;

	i = 0;
	hei = 0;
	if (ft_strlen(mino) != 20)
		return (0);
	while (mino[i])
	{
		if (mino[i] == '\n')
			hei++;
		i++;
	}
	if (hei != valid_mino->heigh)
		return (0);
	if (!(check_tmino(mino, tab_mino)))
		return (0);
	return (1);
}

int		check_all(char **tab)
{
	return (1);
}

int		check_tab(t_valid mino, char **tab)
{
	int i;

	i = 0;
	if (mino.heigh != 4 || mino.length != 4)
		return (0);
	while (mino.str[i])
	{
		if (mino.str[i] != '.' && mino.str[i] != '#')
			return (0);
		i++;
	}
	if (!(check_all(tab)))
		return (0);
	return (1);
}
