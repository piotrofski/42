/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:27:43 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/26 17:06:36 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	add(char *s1, char *s2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(s1);
	y = ft_atoi(s2);
	res = x + y;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	sub(char *s1, char *s2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(s1);
	y = ft_atoi(s2);
	res = x - y;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	mul(char *s1, char *s2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(s1);
	y = ft_atoi(s2);
	res = x * y;
	ft_putnbr(res);
	ft_putchar('\n');
}

void	div(char *s1, char *s2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(s1);
	y = ft_atoi(s2);
	if (y != 0)
	{
		res = x / y;
		ft_putnbr(res);
		ft_putchar('\n');
	}
	else
		ft_putstr("Stop : division by zero\n");
}

void	mod(char *s1, char *s2)
{
	int	x;
	int	y;
	int	res;

	x = ft_atoi(s1);
	y = ft_atoi(s2);
	if (y != 0)
	{
		res = x % y;
		ft_putnbr(res);
		ft_putchar('\n');
	}
	else
		ft_putstr("Stop : modulo by zero\n");
}
