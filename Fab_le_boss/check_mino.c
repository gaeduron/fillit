/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 18:02:05 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 09:53:12 by narajaon         ###   ########.fr       */
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

int		check_mino(t_valid mino)
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
	if (!(check_mino(mino)))
		return (0);
	return (1);
}
