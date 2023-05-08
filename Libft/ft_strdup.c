/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <apiotrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:09:38 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/03 20:13:36 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

char	*ft_strdup(const char *src)
{
	int	i;
	char	*res;
	char	*csrc;

	i = 0;
	csrc = (char *)src;
	res = malloc(sizeof(char) * (ft_strlen(csrc) + 1));
	while (csrc[i])
	{
		res[i] = csrc[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}