/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 05:16:04 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/12 06:31:45 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void ft_character(va_list arg)
{
	int i = va_arg(arg, int);
	printf("%c\n", i); //putchar + endl	
	va_end(arg);
}