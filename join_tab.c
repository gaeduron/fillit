/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:52:25 by gduron            #+#    #+#             */
/*   Updated: 2017/04/20 18:23:57 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*join_tab(char **str_tab)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 1;
	while (str_tab[i - 1])
		i++;
	if (!(str = (char *)malloc(sizeof(char) * ((i * 21) + 1))))
		    return (0);
	i = 0;
	while (str_tab[i])
	{
		tmp = ft_strjoin(str_tab[i], str);
		free(str);
		free(str_tab[i]);
		str = tmp;
	}
	free(str_tab);
	return (str);
}
