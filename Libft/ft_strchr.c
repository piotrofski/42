/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:45:27 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 20:01:44 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	char *sDup;

	sDup = (char *)s;
	i = 0;
	while (i < ft_strlen(sDup))
	{
		if (sDup[i] == (char) c)
			return (&sDup[i]);
		i++;
	}
	if (c == '\0')
		return (&sDup[i]);
	return (NULL);
}
