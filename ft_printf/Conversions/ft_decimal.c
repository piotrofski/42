/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:44:55 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:31:42 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_decimal(va_list arg)
{
	double f = va_arg(arg, double);
	printf("%f\n", f);
	va_end(arg);
}