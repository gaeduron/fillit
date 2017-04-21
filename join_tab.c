/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:52:25 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 11:08:46 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*join_tab(char **str_tab)
{
	int		i;
	int		len;
	char	*str;
	char	*tmp;

	len = 1;
	while (str_tab[len - 1])
		len++;
	if (!(str = ft_strnew((len * 21) + 1)))
		return (0);
	i = 0;
	while (str_tab[i])
	{
		str = ft_strcat(str, str_tab[i++]);
		if (i < len - 1)
			str = ft_strcat(str, "\n");
	}
	return (str);
}
