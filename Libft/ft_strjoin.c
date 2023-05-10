/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:50:36 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/10 17:03:10 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (dest[length])
		length++;
	while (src[i])
	{
		dest[i + length] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}


char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) ) + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	res = ft_strcat((char *)s1, (char *)s2);
	return (res);
}
/*
int	main(int argc, char **argv)
{
	char *res;
	res = NULL;
	if (argc)
	{
		res = ft_strjoin(argv[1], argv[2]);
		printf("res: %s\n", res);
	}
	return (0);
}*/