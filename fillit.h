/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/18 18:03:35 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
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

typedef struct s_valid
{
	int		heigh;
	int		length;
	char	*str;
	int		pos1[2];
	int		pos2[2];
	int		pos3[2];
	int		pos4[2];
}				t_valid;

void	print_grid(t_env *env);
void	print_tab(char **tab);
#endif
