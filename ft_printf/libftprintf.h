/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 04:13:17 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:30:37 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);

void 	ft_integer(va_list arg);
void	ft_character(va_list arg);
void	ft_string(va_list arg);
void	ft_hexconv(va_list arg);
void	ft_decimal(va_list arg);
void	ft_unsigned_dec(va_list arg);
void 	ft_percent(va_list arg);
void 	ft_hex_min(va_list arg);
void 	ft_hex_max(va_list arg);


#endif