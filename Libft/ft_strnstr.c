/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:30:39 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/11 19:25:08 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int comp_str(char c1, char c2)
{
	return (c1 - c2);
}

char *ft_strnstr(const char *big, const char *little, unsigned int len)
{
	int	i;
	int	j;
	int	dlen;
	char *b;
	char *l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	j = 0;
	dlen = ft_strlen(l);
	if (dlen == 0)
		return (b);
	else
	{
		while (big[i] != '\0' && len > 0)
		{
			if (comp_str(b[i], l[j]) == 0)
			{
				j++;
				if (j == ft_strlen(l))
					return (b + 1 + i - j);
			}
			else
				j = 0;
			i++;
			len--;
		}
		return (0);
	}
}