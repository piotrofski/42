/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:06:19 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/13 20:40:03 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "./libft/libft.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
		ft_putchar(s[i]);
}

void ft_character(va_list arg, t_print *tab)
{
	int c = va_arg(arg, int);
	ft_putchar(c);
	tab->total_length++;
}

void ft_dispatch(int i, va_list arg, t_print *tab)
{
	void (*f[1])(va_list, t_print *);
	f[0] = &ft_character;
	(*f[i])(arg, tab);
}

void ft_check_flag(char c, va_list arg, t_print *tab)
{
	char	*flags = "cspdiuxX%";
	int	i;

	i = -1;
	while (flags[++i])
		if (c == flags[i])
		{
			ft_dispatch(i, arg, tab);
			return;
		}
	if (i == ft_strlen(flags))
	{
		ft_putstr("(null)"); //means that it didn't find any flag
		tab->total_length += 6;
		return;
	}
}

int	ft_printf(const char *format, ...)
{
	int 	i;
	t_print tab;
	va_list arg;

	i = -1;
	va_start(arg, format);
	while (format[++i])
	{
		if (format[i] == '%')
			ft_check_flag(format[i + 1], arg, &tab);
		// else
		// 	format = ft_read_only(format)
	}
	return (tab.total_length);
}

int main()
{
	char c = 'a';
	int res = ft_printf("%c\n", c);
	//int res2 = printf("%c\n", c);

	printf("mine:\t%d\n", res);
	//printf("true:\t%d\n", res2);
	return (0);
}

