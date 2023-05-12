/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_dec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:47:10 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:31:20 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_unsigned_dec(va_list arg)
{
	unsigned int f = va_arg(arg, unsigned int);
	printf("%u\n", f);
	va_end(arg);
}