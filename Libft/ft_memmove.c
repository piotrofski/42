/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:45:29 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/11 19:14:37 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
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