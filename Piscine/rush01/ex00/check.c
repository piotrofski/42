/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihalee <jihalee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:08:15 by jihalee           #+#    #+#             */
/*   Updated: 2023/02/18 17:08:24 by jihalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_colup_valid(t_var *vars)
{
	int	i;
	int	max;
	int	col;
	int	count;

	col = 0;
	while (col <= 3)
	{
		max = 0;
		count = 0;
		i = 0;
		while (i < 4)
		{
			if (max < vars->map[i][col])
			{
				max = vars->map[i][col];
				count++;
			}
			i++;
		}
		if (count != vars->col_up[col])
			return (0);
		col++;
	}
	return (1);
}

int	is_coldown_valid(t_var *vars)
{
	int	i;
	int	max;
	int	col;
	int	count;

	col = 0;
	while (col <= 3)
	{
		max = 0;
		count = 0;
		i = 3;
		while (i >= 0)
		{
			if (max < vars->map[i][col])
			{
				max = vars->map[i][col];
				count++;
			}
			i--;
		}
		if (count != vars->col_down[col])
			return (0);
		col++;
	}
	return (1);
}

int	is_rowleft_valid(t_var *vars)
{
	int	i;
	int	max;
	int	row;
	int	count;

	row = 0;
	while (row <= 3)
	{
		max = 0;
		count = 0;
		i = 0;
		while (i <= 3)
		{
			if (max < vars->map[row][i])
			{
				max = vars->map[row][i];
				count++;
			}
			i++;
		}
		if (count != vars->row_left[row])
			return (0);
		row++;
	}
	return (1);
}

int	is_rowright_valid(t_var *vars)
{
	int	i;
	int	max;
	int	row;
	int	count;

	row = 0;
	while (row <= 3)
	{
		max = 0;
		count = 0;
		i = 3;
		while (i >= 0)
		{
			if (max < vars->map[row][i])
			{
				max = vars->map[row][i];
				count++;
			}
			i--;
		}
		if (count != vars->row_right[row])
			return (0);
		row++;
	}
	return (1);
}

int	final_check(t_var *vars)
{
	if (is_rowleft_valid(vars) && is_rowright_valid(vars)
		&& is_colup_valid(vars) && is_coldown_valid(vars))
	{	
		return (1);
	}		
	return (0);
}
