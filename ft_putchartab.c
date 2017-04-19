/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchartab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 09:03:25 by gduron            #+#    #+#             */
/*   Updated: 2017/04/19 09:12:44 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putchartab(char **tab, char format)
{
	int		i;

	i = -1;
	while (tab[++i])
	{
		write(1, tab[i], ft_strlen(tab[i]));
		if (format == 't')
			write(1, "\n", 1);
	}
}
