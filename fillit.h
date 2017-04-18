/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 10:49:35 by gduron           ###   ########.fr       */
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
	int			i_x;
	int			i_y;
	int			offset_x;
	int			offset_y;
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
