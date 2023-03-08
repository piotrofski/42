/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:22:33 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/01 18:35:30 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	count_digits(long nb)
{
	int	res;
	
	res = 0;
	if (nb < 0)
	{
		res++;
		nb = -nb;
	}
	while (nb > 10)
	{
		res++;
		nb = nb / 10;
	}
	res++;
	return (res);
}

char	*ft_itoa(int nb)
{
	long	nbr;
	char	*res;
	int	digits;
	int	digits_copy;
	int	i;

	i = 0;
	nbr = nb;
	digits = count_digits(nbr);
	digits_copy = digits;
	res = malloc (sizeof(int) * digits);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 10)
	{
		res[digits - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		digits--;
		if (nbr == 0)
			break ;
	}
	res[digits - 1] = nbr + '0';
	res[digits_copy] = '\0';
	return (res);
}

int	main(void)
{
	printf("result: %s\n", ft_itoa(-123456));
	return (0);
}
