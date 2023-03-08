/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:34:48 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/22 19:49:26 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_error(char *base);
int		get_index(char c, char *base);
int		get_size(char *base);
int		ft_atoi_base(char *str, char *base);
int		num_digits(int num_base_from, int len_baseto);
char	*operations(char *nbr, char *base_from, char *base_to, char *result);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (get_size(base) == 0 || get_size(base) == 1)
		return (0);
	else
	{
		while (base[i])
		{
			j = i + 1;
			if (base[i] == '+' || base[i] == '-'
				|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
				return (0);
			else if (base[i] < 32 || base[i] > 126)
				return (0);
			while (base[j] && base[j] != base[i])
				j++;
			if (base[j] != '\0')
				return (0);
			i++;
		}
		return (1);
	}
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	get_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	total;
	int	count_minus;

	total = 0;
	i = 0;
	count_minus = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			count_minus = -count_minus;
		i++;
	}
	while (get_index(str[i], base) > -1 && str[i])
	{
		total = total * get_size(base) + get_index(str[i], base);
		i++;
	}
	return (total * count_minus);
}
