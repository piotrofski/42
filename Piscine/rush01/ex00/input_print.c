/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihalee <jihalee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:08:37 by jihalee           #+#    #+#             */
/*   Updated: 2023/02/18 17:08:38 by jihalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_input_valid(int argc, char **argv)
{
	int	len;

	if (argc != 2)
		return (0);
	len = 0;
	while (argv[1][len])
	{
		if (len % 2 == 0)
		{
			if (argv[1][len] < '1' || argv[1][len] > '4')
				return (0);
		}
		else
		{
			if (argv[1][len] != ' ')
				return (0);
		}
		len++;
	}
	if (len != 31)
		return (0);
	return (1);
}

void	parse_input(char **argv, t_var *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 32)
	{
		if (i >= 0 && i < 8)
			vars->col_up[j % 4] = argv[1][i] - '0';
		else if (i < 16)
			vars->col_down[j % 4] = argv[1][i] - '0';
		else if (i < 24)
			vars->row_left[j % 4] = argv[1][i] - '0';
		else if (i < 32)
			vars->row_right[j % 4] = argv[1][i] - '0';
		i += 2;
		j++;
	}
}

void	print_result(t_var *vars)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putchar(vars->map[i / 4][i % 4] + '0');
		if (i % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	init_used(t_var *vars)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		vars->is_used_row[i / 4][i % 4] = 0;
		vars->is_used_col[i / 4][i % 4] = 0;
		i++;
	}
}
