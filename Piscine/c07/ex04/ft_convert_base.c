/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:35:17 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/23 12:29:47 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_error(char *base);
int		get_index(char c, char *base);
int		get_size(char *base);
int		ft_atoi_base(char *str, char *base);
int		num_digits(long num_base_from, int len_baseto);
char	*operations(char *nbr, char *base_from, char *base_to, char *result);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	num_digits(long int num_base_from, int len_baseto)
{
	int	digit;

	digit = 0;
	if (num_base_from < 0)
	{
		digit++;
		num_base_from *= -1;
	}
	while (num_base_from >= len_baseto)
	{
		num_base_from = num_base_from / len_baseto;
		digit++;
	}
	digit++;
	return (digit);
}

char	*operations(char *nbr, char *base_from, char *base_to, char *result)
{
	long	n_bf;
	int		digit;
	int		max_digit;

	n_bf = (long) ft_atoi_base(nbr, base_from);
	digit = num_digits(n_bf, get_size(base_to));
	max_digit = digit;
	if (n_bf < 0)
	{
		n_bf = -n_bf;
		result[0] = '-';
		max_digit++;
	}
	while (digit >= 1)
	{
		result[digit - 1] = base_to[n_bf % get_size(base_to)];
		n_bf = n_bf / get_size(base_to);
		digit--;
		if (n_bf == 0)
			break ;
	}
	result[max_digit] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	n_bf;
	int		i;
	int		digit;

	if (ft_error(base_from) == 1 && ft_error(base_to) == 1)
	{
		i = 0;
		n_bf = (long)ft_atoi_base(nbr, base_from);
		digit = num_digits(n_bf, get_size(base_to));
		result = (char *)malloc (sizeof(char) * (digit + 1));
		if (!result)
			return (NULL);
		return (operations(nbr, base_from, base_to, result));
	}
	return (NULL);
}
