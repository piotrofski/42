/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:06:59 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/01 16:41:06 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_atoi(char *str)
{
	int	total;
	int	i;
	int	count_minus;

	i = 0;
	total = 0;
	count_minus = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	if (count_minus % 2 == 0)
		return (total);
	else
		return (-total);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	size = 0;
	tab = NULL;
	if (min < max)
	{
		size = (max - min) + 1;	
		tab = malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		printf("size: %d\n", size);
		while (min + i <= max)
		{
			tab[i] = min + i;
			printf("tab[%d]:\t%d\n", i, tab[i]);
			i++;
		}
		return (tab);	
	}
	else if (min > max)
	{
		size = (min - max) + 1;
		tab = malloc(sizeof(int) * size);
		if (!tab)
			return (NULL);
		printf("size: %d\n", size);
		while (max + i <= min)
			{
				tab[i] = max + i;
				printf("tab[%d]:\t%d\n", i, tab[i]);
				i++;
			}
		return (tab);
	}
	size = 1;
	printf("size: %d\n", size);
	tab = malloc(sizeof(int));
	if (!tab)
		return (NULL);
	tab[0] = min;
	printf("tab[%d]:\t%d\n", i, tab[i]);
	return (tab);
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
