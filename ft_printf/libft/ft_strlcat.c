/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:16:22 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 18:29:19 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dlen;
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size == 0 || size <= dlen)
		return (size + slen);
	while (i < size - dlen - 1 && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}