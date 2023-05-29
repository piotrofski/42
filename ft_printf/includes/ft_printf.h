/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:13:17 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:16:51 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_print
{
	int	width;
	int total_length;
} t_print;

void ft_putchar(char c);
void ft_putstr(char *s);
int     count_digs(unsigned int nb);
char    *ft_utoa(unsigned int n);
int	count_digs_base(unsigned long nb, int base_len);
char    *ft_ultoa_base(unsigned long n, char *base);
void ft_c(va_list arg, t_print *tab);
void ft_s(va_list arg, t_print *tab);
void ft_p(va_list arg, t_print *tab);
void ft_d(va_list arg, t_print *tab);
void ft_i(va_list arg, t_print *tab);
void ft_u(va_list arg, t_print *tab);
void ft_x(va_list arg, t_print *tab);
void ft_X(va_list arg, t_print *tab);
void ft_perc(va_list arg, t_print *tab);
void ft_dispatch(int i, va_list arg, t_print *tab);
void ft_check_flag(char c, va_list arg, t_print *tab);
char *ft_strchr_mod(const char *s);
const char *ft_read(const char *format, t_print *tab);
int			ft_printf(const char *format, ...);

#endif