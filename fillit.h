/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 13:34:03 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
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
	t_tmino		**tab_tmino;
	char		**grid;
	int			grid_size;
}				t_env;

void	print_grid(t_env *env);
void	print_tab(char **tab);
t_tmino	**str_to_tab_tmino(char *input_str);
t_env	*init_t_env(char *input_str);
t_tmino	*init_t_tmino(char **str);
#endif
