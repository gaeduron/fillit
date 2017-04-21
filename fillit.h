/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 09:49:13 by gduron            #+#    #+#             */
/*   Updated: 2017/04/21 08:20:24 by narajaon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
#include <stdio.h>

#define MINO1 mino->pos1
#define MINO2 mino->pos2
#define MINO3 mino->pos3
#define MINO4 mino->pos4

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
	int 		best_size;
}				t_env;

typedef struct s_valid
{
	int		pos1[2];
	int		pos2[2];
	int		pos3[2];
	int		pos4[2];
}				t_valid;


int		template_i(t_valid *mino);
int		template_z1(t_valid *mino);
int		template_z2(t_valid *mino);
int		template_sqrt(t_valid *mino);
void	print_grid(t_env *env);
void	print_tab(char **tab);
t_tmino	**str_to_tab_tmino(char *input_str);
t_env	*init_t_env(char *input_str);
t_tmino	*init_t_tmino(char **str);
void	files_manager(int ac, char **av);
void	do_fillit(int fd);
void	ft_searching(t_env *env);
char	*read_file_desctriptor(int fd);
void	ft_putchartab(char **tab, char format);
int		no_collision(t_tmino **tab_tmino, int pos, int size);
int		nb_mino(char *str);
t_valid	*mino_struct(char *str);
char	*fun_tab(char *str, char **formated);
void	write_mino(t_tmino *mino, char **grid);
int		init_grid(t_env *env);
void	print_grid(t_env *env);
char	**checkin(char *mino, char *f_mino);
#endif
