/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_template2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 17:01:21 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/20 17:04:42 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		template_I(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 2 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 3 && MINO4[1] == MINO1[1]))
		return (13);
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] && MINO3[1] == MINO1[1] + 2)\
			&& (MINO4[0] == MINO1[0] && MINO4[1] == MINO1[1] + 3))
		return (14);
	return (0);
}

int		template_Z1(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 2))
		return (15);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1] - 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] - 1))
		return (16);
	return (0);
}


int		template_Z2(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] - 1)\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1]))
		return (17);
	if ((MINO2[0] == MINO1[0] + 1 && MINO2[1] == MINO1[1])\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1] + 1)\
			&& (MINO4[0] == MINO1[0] + 2 && MINO4[1] == MINO1[1] + 1))
		return (18);
	return (0);
}

int		template_sqrt(t_valid *mino)
{
	if ((MINO2[0] == MINO1[0] && MINO2[1] == MINO1[1] + 1)\
			&& (MINO3[0] == MINO1[0] + 1 && MINO3[1] == MINO1[1])\
			&& (MINO4[0] == MINO1[0] + 1 && MINO4[1] == MINO1[1] + 1))
		return (19);
	return (0);
}
