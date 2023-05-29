/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:39:37 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/11 19:25:55 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

int	ft_tolower(int	c)
{
	if (ft_isalpha(c) == 0)
		return (c);
	if (c < 91 && c > 64)	
		return c + 32;
	return (c);
}