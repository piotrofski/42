/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:06:19 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 19:59:48 by piotroff         ###   ########.fr       */
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

t_print *ft_initialise_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero = 0;
	tab->dot = 0;
	tab->dash = 0;
	tab->total_length = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->percent = 0;
	tab->space = 0;
	return (tab);
}

void ft_check_format(const char *format, int i, t_print *tab)
{
	char *convrt;
	int	index;

	convrt = "cspdiuxX%";
	index = 0;
	while (convrt[index] != format[i])
		index++;
	if (convrt[index] == '\0')
	 	write(1, &format[i - 1], 1);
	else
		send_to_func(index, tab->arg);
}

int	ft_printf(const char *format, ...)
{
	t_print *tab;
	int	i;

	tab = malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->arg, format);
	i = -1;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_check_format(format, i + 1, tab);
			i++;
		}
		else
			printf("%c", format[i]);
	}
	va_end(tab->arg);
	return (0); //need to change
}

int main()
{
	char *ptr = "suis Ariel!";
	ft_printf("Salut je %s et je suis %s", ptr, ptr);
	return 0;
}