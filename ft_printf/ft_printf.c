/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:06:19 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:02:26 by piotroff         ###   ########.fr       */
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
	{
		ft_putchar(s[i]);
		i++;
	}
}

int     count_digs(unsigned int nb)
{
    int     res;
    res = 1;
    while (nb >= 10)
    {
            res++;
            nb = nb / 10;
    }
    res++;
    return (res);
}

char    *ft_utoa(unsigned int n)
{
    char    *res;
    int     digits;
	int 	i;
	
    digits = count_digs(n);
	i = digits - 2; //bc count_digs adds 1 by default
    res = malloc (sizeof(char) * digits);
    while (i >= 0)
    {
        res[i] = (n % 10) + '0';
        n = n / 10;
		i--;
    }
	res[digits] = '\0';
    return (res);
}

int	count_digs_base(unsigned long nb, int base_len)
{
	int res;

	res = 1;
	while (nb >= (unsigned long) base_len)
	{
		res++;
		nb = nb / base_len;
	}
	// res++;
	return (res);
}

char    *ft_ultoa_base(unsigned long n, char *base)
{
    char    *res;
    int     digits;
	int 	i;
	int base_len;

	base_len = ft_strlen(base);
    digits = count_digs_base(n, base_len);
	i = digits - 1; //bc count_digs adds 1 by default
    res = malloc (sizeof(char) * digits);
    while (i >= 0)
    {
        res[i] = base[n % base_len];
        n = n / base_len;
		i--;
    }
	res[digits] = '\0';
    return (res);
}

void ft_c(va_list arg, t_print *tab)
{
	int c = va_arg(arg, int);
	ft_putchar(c);
	tab->total_length++;
}

void ft_s(va_list arg, t_print *tab)
{
	char *s = va_arg(arg, char *);
	if (!s)
	{
		ft_putstr("(null)");
		tab->total_length += 6;
	}
	else
	{
		ft_putstr(s);
		tab->total_length += ft_strlen(s);
	}
}

void ft_p(va_list arg, t_print *tab) //finish this
{
	void *p = va_arg(arg, void *);
	char *res;

	res = ft_ultoa_base((unsigned long) p, "0123456789abcdef");
	if (!res)
		return;
	ft_putstr("0x");
	ft_putstr(res);
	tab->total_length += ft_strlen(res) + 2;
	free(res);
}

void ft_d(va_list arg, t_print *tab)
{
	int d = va_arg(arg, int);
	ft_putstr(ft_itoa(d));
	tab->total_length += ft_strlen(ft_itoa(d));
}

void ft_i(va_list arg, t_print *tab)
{
	int i = va_arg(arg, int);
	ft_putstr(ft_itoa(i));
	tab->total_length += ft_strlen(ft_itoa(i));
}

void ft_u(va_list arg, t_print *tab)
{
    unsigned int u = va_arg(arg, unsigned int);
    ft_putstr(ft_utoa(u));
    tab->total_length += ft_strlen(ft_utoa(u));
}

void ft_x(va_list arg, t_print *tab)
{
	unsigned int x = va_arg(arg, unsigned int);
	char *res;

	res = ft_ultoa_base((unsigned int) x, "0123456789abcdef");
	if (!res)
		return;
	ft_putstr(res);
	tab->total_length += ft_strlen(res);
	free(res);
}

void ft_X(va_list arg, t_print *tab)
{
	unsigned int X = va_arg(arg, unsigned int);
	char *res;

	res = ft_ultoa_base((unsigned int) X, "0123456789ABCDEF");
	if (!res)
		return;
	ft_putstr(res);
	tab->total_length += ft_strlen(res);
	free(res);
}

void ft_perc(va_list arg, t_print *tab)
{
	int c = va_arg(arg, int);
	c = '%';
	ft_putchar(c);
	tab->total_length++;
}

void ft_dispatch(int i, va_list arg, t_print *tab)
{
	void (*f[9])(va_list, t_print *);
	f[0] = &ft_c;
	f[1] = &ft_s;
	f[2] = &ft_p;
	f[3] = &ft_d;
	f[4] = &ft_i;
	f[5] = &ft_u;
	f[6] = &ft_x;
	f[7] = &ft_X;
	f[8] = &ft_perc;
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

char *ft_strchr_mod(const char *s)
{
	while (*s)
	{
		if (*s == '%')
			return ((char *)s);
		s++;
	}
	if (!s)
		return ((char *)s);
	return (NULL);
}

const char *ft_read(const char *format, t_print *tab)
{
	char *next;
	
	next = ft_strchr_mod(format);
	if (next)
		tab->width = next - format;
	else
		tab->width = ft_strlen(format);
	write(1, format, tab->width);
	tab->total_length += tab->width;
	while (*format && *format != '%')
		format++;
	return (format);
}

int	ft_printf(const char *format, ...)
{
	t_print tab;
	va_list arg;

	tab.total_length = 0;
	tab.width = 0;
	va_start(arg, format);
	while (*format)
	{
		if (*format == '%')
		{
			ft_check_flag(*(format + 1), arg, &tab);
			format += 2;
		}
		else
			format = ft_read(format, &tab);
	}
	va_end(arg);
	return (tab.total_length);
}

int main()
{
	int res = ft_printf("ariel%i\n", -12);
	int res2 = printf("ariel%d\n", -12);
	int num = 42;
	unsigned int u1 = 42;
    unsigned int u2 = -42;
	void *ptr1 = &u1;
    void *ptr2 = &u2;
	unsigned int x1 = 0xABCD;
    unsigned int x2 = 0xDEADBEEF;
	unsigned int x3 = 0xABCD;
    unsigned int x4 = 0xDEADBEEF;
	int result = ft_printf("\nmine:\t%d\t%i\t%u\t%u\t%p\t%p\t%x\t%x\t%X\t%X\t%%\n", res, num, u1, u2, ptr1, ptr2,  x1, x2, x3, x4);
	int resul2 = printf("\ntrue:\t%d\t%i\t%u\t%u\t%p\t%p\t%x\t%x\t%X\t%X\t%%\n", res2, num, u1, u2, ptr1, ptr2, x1, x2, x3, x4);

	printf("mine = %d\n", result);
	printf("true = %d\n", resul2);
	return (0);
}

