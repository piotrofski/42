/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:41:32 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/09 19:32:04 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_abc(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (!(a == 7 && b == 8 && c == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_abc(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
