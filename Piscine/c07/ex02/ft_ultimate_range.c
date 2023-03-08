/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:42:05 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/22 14:44:57 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	*range = (int *)malloc(sizeof (int) * size);
	if (!*range)
		return (-1);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
