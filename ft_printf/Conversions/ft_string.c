/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:16:55 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:31:25 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void ft_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	printf("%s\n", s); //pustr + endl	
	va_end(arg);
}