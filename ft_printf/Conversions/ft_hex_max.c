/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:53:55 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 18:39:32 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void ft_hex_max(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);
	printf("%X\n", x);
	va_end (arg);
}