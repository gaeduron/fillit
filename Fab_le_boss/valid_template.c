/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_template.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:54:32 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/19 19:44:15 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"
#include <stdio.h>

int		template_T(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 3))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 3 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 3 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 3 && MINO4[1] == MINO1[1]))
		return (1);
	return (0);
}

int		template_L1(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 2))
		return (1);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] && MINO4[1] == MINO1[1] + 2))
		return (1);
	return (0);
}

int		template_L2(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (1);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 2)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (1);
	return (0);
}

int		template_I(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 3 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 3))
		return (1);
	return (0);
}

int		template_Z1(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 2))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] - 1))
		return (1);
	return (0);
}

int		template_Z2(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (1);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (1);
	return (0);
}

int		template_sqrt(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 1))
		return (1);
	return (0);
}

int		fun_tab(char *str)
{
	void	*f_tab[7];
	t_valid	*validate;
	int		(*f)(t_valid);
	int		i;

	if (!(validate = mino_struct(str)))
		return (0);
	i = 0;
	f_tab[0] = template_T;
	f_tab[1] = template_L1;
	f_tab[2] = template_L2;
	f_tab[3] = template_I;
	f_tab[4] = template_Z1;
	f_tab[5] = template_Z2;
	f_tab[6] = template_sqrt;
	while (i < 6)
	{
		f = f_tab[i];
		if (f(*validate))
			return (1);
		i++;
	}
	return (0);
}
