/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_template.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:54:32 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/20 19:27:32 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"
#include <stdio.h>

int		template_t(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 1))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 1))
		return (2);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (3);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (4);
	return (0);
}

int		template_l1(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (5);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 2))
		return (6);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (7);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 2))
		return (8);
	return (0);
}

int		template_l2(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (9);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (10);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (11);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 2)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (12);
	return (0);
}

char	*fun_tab(char *str, char **formated)
{
	void	*f_tab[7];
	t_valid	*validate;
	int		(*f)(t_valid *);
	int		template_n;
	int		i;

	if (!(validate = mino_struct(str)))
		return (0);
	i = 0;
	template_n = 0;
	f_tab[0] = template_t;
	f_tab[1] = template_l1;
	f_tab[2] = template_l2;
	f_tab[3] = template_i;
	f_tab[4] = template_z1;
	f_tab[5] = template_z2;
	f_tab[6] = template_sqrt;
	while (i < 7)
	{
		f = f_tab[i];
		if (f(validate))
			return (formated[template_n = f(validate) - 1]);
		i++;
	}
	return (0);
}
