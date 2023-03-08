/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihalee <jihalee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:07:56 by jihalee           #+#    #+#             */
/*   Updated: 2023/02/18 17:09:51 by jihalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	bt(int depth, t_var *vars)
{
	int	i;

	if (depth == 16 && final_check(vars) == 1 && vars->found == 0)
	{
		print_result(vars);
		vars->found = 1;
	}
	else
	{
		i = 1;
		while (i <= 4)
		{
			if (vars->is_used_row[depth / 4][i - 1] == 0
				&& vars->is_used_col[depth % 4][i - 1] == 0)
			{
				vars->map[depth / 4][depth % 4] = i;
				vars->is_used_row[depth / 4][i - 1] = 1;
				vars->is_used_col[depth % 4][i - 1] = 1;
				bt(depth + 1, vars);
				vars->is_used_row[depth / 4][i - 1] = 0;
				vars->is_used_col[depth % 4][i - 1] = 0;
			}
			i++;
		}
	}
}
