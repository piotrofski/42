/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:06:19 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:30:57 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void send_to_func(int index, va_list arg)
{
	void (*f[9])(va_list arg);

	f[0] = &ft_character;
	f[1] = &ft_string;
	f[2] = &ft_hexconv;
	f[3] = &ft_integer;
	f[4] = &ft_integer;
	f[5] = &ft_unsigned_dec;
	f[6] = &ft_hex_min;
	f[7] = &ft_hex_max;
	f[8] = &ft_percent;
	(*f[index])(arg);
	va_end(arg);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format);
	char *convrt;
	int index;

	index = 0;
	convrt = "cspdiuxX%";
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			while (convrt[index] != *format)
				index++;
			send_to_func(index, arg);
			index = 0;
		}
		else
			printf("%c", *format);
		format++;
	}
	va_end(arg);
	return (0);
}