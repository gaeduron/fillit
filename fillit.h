/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 09:49:33 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define ABS(value) value < 0 ? -value : value
typedef struct	s_tmino
{
	char		**str;
	int			x;
	int			y;
	int			best_x;
	int			best_y;
	int			from_x;
	int			from_y;
	int			to_x;
	int			to_y;
}				t_tmino;

typedef struct	s_env
{
	char		*input_str;
	t_tmino		**tab_tmino;
	char		**grid;
	int			grid_size;
	int			min_size;
}				t_env;
#endif
