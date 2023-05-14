/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:38:47 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/14 17:15:09 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	char *sDup;

	sDup = (char *)s;
	i = ft_strlen(sDup);
	while (i >= 0)
	{
		if (sDup[i] == c)
			return (&sDup[i]);
		i--;
	}
	return (NULL);
}