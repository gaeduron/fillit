/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchartab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 09:03:25 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 11:05:04 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_putchartab(char **tab, char format)
{
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(tab[0]);
	while (tab[++i])
	{
		write(1, tab[i], len);
		if (format == 't')
			write(1, "\n", 1);
	}
}
