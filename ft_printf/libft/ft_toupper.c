/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:22:32 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 19:52:27 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int	ft_toupper(int	c)
{
	if (ft_isalpha(c) == 0)
		return (c);
	if (c < 123 && c > 96)	
		return c - 32;
	return (c);
}