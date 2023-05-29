/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:38:47 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/11 19:25:15 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	char *sDup;

	sDup = (char *)s;
	i = ft_strlen(sDup);
	while (i >= 0)
	{
		if (sDup[i] == (char) c)
			return (&sDup[i]);
		i--;
	}
	return (NULL);
}
