/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:45:29 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 18:29:36 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *to = (char *)dest;
	char *from = (char *)src;
	unsigned int i;
	

	i = n - 1;
	if (from == to)
		return (dest);
	i = 0;
	if (from > to && from - to < (int) n) //does not overlap
	{
		while (i < n)
		{
			to[i] = from[i];
			i++;
		}
		return (dest);
	}
	//overlap so backward copy
	i = n;
	while (i > 0)
	{
		to[i - 1] = from[i - 1];
		i--;
	}
	return (dest);
}