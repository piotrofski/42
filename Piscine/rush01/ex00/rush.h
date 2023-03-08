/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihalee <jihalee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:52:55 by jihalee           #+#    #+#             */
/*   Updated: 2023/02/18 17:15:11 by jihalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>

typedef struct s_variable
{
	int	map[4][4];
	int	is_used_col[4][4];
	int	is_used_row[4][4];
	int	col_up[4];
	int	col_down[4];
	int	row_left[4];
	int	row_right[4];
	int	found;
}				t_var;

int		is_input_valid(int argc, char **argv);
void	parse_input(char **argv, t_var *vars);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_result(t_var *vars);
int		is_colup_valid(t_var *vars);
int		is_coldown_valid(t_var *vars);
int		is_rowleft_valid(t_var *vars);
int		is_rowright_valid(t_var *vars);
int		final_check(t_var *vars);
void	bt(int depth, t_var *vars);
void	init_used(t_var *vars);

#endif
