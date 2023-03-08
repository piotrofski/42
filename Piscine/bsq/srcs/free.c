/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:14:13 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 15:42:49 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_free(t_vars *vars)
{
	int	i;

	i = 0;
	while (i < vars->num_lines)
	{
		free(vars->map_char[i]);
		i++;
	}
	free(vars->map_char);
	i = 0;
	while (i <= vars->num_lines)
	{
		free(vars->map_int[i]);
		i++;
	}
	free(vars->map_int);
}
