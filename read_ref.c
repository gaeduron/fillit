/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_ref.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:36:32 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 14:18:12 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	write_ref(char *dest)
{
	dest = ft_strcat(dest, "###.\n.#..\n....\n....\n\n");
	dest = ft_strcat(dest, ".#..\n###.\n....\n....\n\n");
	dest = ft_strcat(dest, ".#..\n##..\n.#..\n....\n\n");
	dest = ft_strcat(dest, "#...\n##..\n#...\n....\n\n");
	dest = ft_strcat(dest, ".#..\n.#..\n##..\n....\n\n");
	dest = ft_strcat(dest, "#...\n###.\n....\n....\n\n");
	dest = ft_strcat(dest, "##..\n#...\n#...\n....\n\n");
	dest = ft_strcat(dest, "###.\n..#.\n....\n....\n\n");
	dest = ft_strcat(dest, "#...\n#...\n##..\n....\n\n");
	dest = ft_strcat(dest, "###.\n#...\n....\n....\n\n");
	dest = ft_strcat(dest, "##..\n.#..\n.#..\n....\n\n");
	dest = ft_strcat(dest, "..#.\n###.\n....\n....\n\n");
	dest = ft_strcat(dest, "#...\n#...\n#...\n#...\n\n");
	dest = ft_strcat(dest, "####\n....\n....\n....\n\n");
	dest = ft_strcat(dest, "##..\n.##.\n....\n....\n\n");
	dest = ft_strcat(dest, ".#..\n##..\n#...\n....\n\n");
	dest = ft_strcat(dest, ".##.\n##..\n....\n....\n\n");
	dest = ft_strcat(dest, "#...\n##..\n.#..\n....\n\n");
	dest = ft_strcat(dest, "##..\n##..\n....\n....\n");
}

char	*read_ref(void)
{
	char *ref;

	if (!(ref = ft_strnew(400)))
		return (0);
	write_ref(ref);
	return (ref);
}
