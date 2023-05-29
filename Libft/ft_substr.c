/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:46:20 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/15 18:42:17 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		res = ft_calloc(1, sizeof(char));
		if (!res)
			return (NULL);
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (!(new_len < len))
			new_len = len;
		res = malloc(sizeof(char) * (new_len + 1));
		if (!res)
			return (NULL);
		res[new_len] = '\0';
		while (new_len-- > 0)
			res[new_len] = s[start + new_len];
	}
	return (res);
}
