/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:52:59 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/26 17:06:04 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_error_op(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	void	(*ptr[5])(char *, char *);
	char	*sign;
	int		i;

	i = 0;
	sign = "+-*/%";
	ptr[0] = &add;
	ptr[1] = &sub;
	ptr[2] = &mul;
	ptr[3] = &div;
	ptr[4] = &mod;
	if (argc == 4)
	{
		if (ft_error_op(argv[2][0]) == 0)
			return (0);
		while (sign[i] != argv[2][0])
			i++;
		(*ptr[i])(argv[1], argv[3]);
	}
	return (0);
}
