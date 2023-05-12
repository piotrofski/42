/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:53:14 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 18:39:20 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void ft_hex_min(va_list arg)
{
	unsigned int x = va_arg(arg, unsigned int);
	printf("%x\n", x);
	va_end (arg);
}