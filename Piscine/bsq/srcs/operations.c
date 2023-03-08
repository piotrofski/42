/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:25:50 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 16:45:35 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_header.h"

void	print_result(t_vars *vars)
{
	int	i;
	int	j;

	i = vars->coor[0];
	while (i > vars->coor[0] - vars->sizemax)
	{
		j = vars->coor[1];
		while (j > vars->coor[1] - vars->sizemax)
		{
			vars->map_char[i][j] = vars->full;
			j--;
		}
		i--;
	}
	i = -1;
	while (++i < vars->num_lines)
	{
		j = -1;
		while (++j < vars->len_lines)
			ft_putchar(vars->map_char[i][j]);
		ft_putchar('\n');
	}
}

int	sq_size(int **map_int, int i, int j)
{
	int	min;
	int	a;
	int	b;
	int	c;

	a = map_int[i - 1][j - 1];
	b = map_int[i - 1][j];
	c = map_int[i][j - 1];
	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min + 1);
}

int	**translate_map(t_vars *vars)
{
	int	i;
	int	j;

	vars->sizemax = 0;
	i = 0;
	while (++i <= vars->num_lines)
	{
		j = 0;
		while (++j <= vars->len_lines)
		{
			if (vars->map_char[i - 1][j - 1] != vars->obs)
				vars->map_int[i][j] = sq_size(vars->map_int, i, j);
			else
				vars->map_int[i][j] = 0;
			if (vars->sizemax < vars->map_int[i][j])
			{
				vars->sizemax = vars->map_int[i][j];
				vars->coor[0] = i - 1;
				vars->coor[1] = j - 1;
			}
		}
	}
	return (vars->map_int);
}
