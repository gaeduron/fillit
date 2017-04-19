/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/19 13:42:24 by narajaon         ###   ########.fr       */
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
t_tmino	**str_to_tab_tmino(char *input_str);
t_env	*init_t_env(char *input_str);
t_tmino	*init_t_tmino(char **str);
void	files_manager(int ac, char **av);
void	do_fillit(int fd);
char	*read_file_desctriptor(int fd);
void	ft_putchartab(char **tab, char format);
int		no_collision(t_tmino **tab_tmino, int pos);
#endif
