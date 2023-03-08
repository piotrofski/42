/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:39:38 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 16:43:32 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_vars
{
	char	**map_char;
	int		**map_int;
	char	empty;
	char	obs;
	char	full;
	int		num_lines;
	int		len_lines;
	int		sizemax;
	int		coor[2];
}	t_vars;

char	**ft_split(char *str, char *charset);
void	ft_putchar(char c);
void	bsq(char *str, t_vars *vars);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
void	print_result(t_vars *vars);
void	parse_assign(char *str, int len, t_vars *vars);
char	**assign_map_char(char *str, t_vars *vars);
void	operation_main(char *str, t_vars *vars);
void	ft_free(t_vars *vars);
int		sq_size(int **map_int, int i, int j);
int		**translate_map(t_vars *vars);
int		**malloc_map_int(t_vars *vars);
int		parse_read(char *pathfile, t_vars *vars);
int		count_lines(char *str, t_vars *vars);
int		is_printable(char c);
int		ft_atoi(char *str);
int		is_len_same(char *str, int len);
int		is_input_valid(char *str, char empty, char obj, t_vars *vars);
int		is_fl_valid(char *str, t_vars *vars);
int		read_input(char *pathfile, t_vars *vars);
int		ft_strlen(char *str);
int		stdin_to_tmp(void);

#endif
