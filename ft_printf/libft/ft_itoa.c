/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:45:30 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:13:15 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	count_digits(long nb)
{
	int	res;
	
	res = 0;
	if (nb < 0)
	{
		res++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		res++;
		nb = nb / 10;
	}
	res++;
	return (res);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*res;
	int	digits;
	int	digits_copy;

	nbr = n;
	digits = count_digits(nbr);
	digits_copy = digits;
	res = malloc (sizeof(char) * digits);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (digits > 0)
	{
		res[digits - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		digits--;
		if (nbr == 0)
			break ;
	}
	res[digits_copy] = '\0';
	return (res);
}
/*
int	main(void)
{
	printf("result: %s\n", ft_itoa(7103));
	return (0);
}*/