/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:41:15 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/12 17:24:53 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_exception(int x, int y)
{
	if (x <= 0 || y <= 0)
		write (1, "Please type positive integers for x and y", 42);
}

void	ft_printing_condition(int x, int y, int cx, int cy)
{
	if (cy == cx && (cy == 1 || cy == y))
		ft_putchar ('/');
	else if ((cy == y && cx == 1) || (cy == 1 && cx == x))
		ft_putchar (92);
	else if ((cy == 1 || cy == y) && (cx != 1 || cx != x))
		ft_putchar ('*');
	else if ((cy != 1 || cy != y) && (cx == 1 || cx == x))
		ft_putchar ('*');
	else
		ft_putchar (' ');
}

void	rush(int x, int y)
{
	int	cx;
	int	cy;

	ft_exception(x, y);
	cy = 1;
	while (cy <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			ft_printing_condition(x, y, cx, cy);
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
