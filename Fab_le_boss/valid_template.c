/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_template.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narajaon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:54:32 by narajaon          #+#    #+#             */
/*   Updated: 2017/04/19 13:31:12 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"
#include <stdio.h>
#define MINO1 mino->pos1
#define MINO2 mino->pos2
#define MINO3 mino->pos3
#define MINO4 mino->pos4

/* figure en T*/

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

/*figure en L-1*/

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

int		main(void)
{
	t_valid *mino;

	MINO1[0] = 0;
	MINO1[1] = 1;
	MINO2[0] = 1;
	MINO2[1] = 0;
	MINO3[0] = 2;
	MINO3[1] = 1;
	MINO4[0] = 3;
	MINO4[1] = 1;
	printf("%d", template_L2(mino));
	return (0);
}
