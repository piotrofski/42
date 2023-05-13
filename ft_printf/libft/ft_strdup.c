/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:09:38 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/11 19:16:49 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*res;
	char	*csrc;

	i = 0;
	csrc = (char *)s;
	res = malloc(sizeof(char) * (ft_strlen(csrc) + 1));
	while (csrc[i])
	{
		res[i] = csrc[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}