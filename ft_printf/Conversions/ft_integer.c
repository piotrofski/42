/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:11:05 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:31:30 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void ft_integer(va_list arg)
{
	int i = va_arg(arg, int);
	printf("%i\n", i); //putnbr + endl	
	va_end(arg);
}
