/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:25:36 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 18:39:06 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_hexconv(va_list arg)
{
	void	*p = va_arg(arg, void *);
	printf("%p\n", p);
	va_end(arg);
}