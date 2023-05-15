/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:11:23 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/15 18:30:51 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char	*d; 
	char	*s;
	int			i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (n > 0)
	{
        d[i] = s[i];
        if (s[i] == c)
            return (&d[i + 1]);
        d[i] = s[i];
		n--;
		i++;
	}
	return (NULL);
}