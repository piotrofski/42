/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:45:27 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/08 20:38:28 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *c);

char *ft_strchr(const char *s, int c)
{
	int	i;
	char *sDup;

	sDup = (char *)s;
	i = 0;
	while (i < ft_strlen(sDup))
	{
		if (sDup[i] == c)
			return (&sDup[i]);
		i++;
	}
	if (c == '\0')
		return (&sDup[i]);
	return (NULL);
}