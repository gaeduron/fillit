/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mino.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 10:40:11 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/18 13:58:49 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../fillit.h"

void	write_mino(t_tmino *mino, char **grid)
{
	char **ptr;
	int i;
	int j;

	i = 0;
	j = 0;
	ptr = grid;
	ptr = ptr + mino->x;
	*ptr = *ptr + mino->y;
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
