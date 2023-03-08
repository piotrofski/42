/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:24:22 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/01 17:41:29 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	length;


	i = 0;
	length = 0;
	while (strs[i])
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	return (length + ft_strlen(sep) * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int	i;

	i = 0;
	res = malloc(sizeof(char) * (get_size(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	res[0] = '\0';
	while (strs[i])
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat (res, sep);
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	char *res;
	res = NULL;
	if (argc)
	{
		res = ft_strjoin(argc - 1, argv + 1, "|");
		printf("res: %s\n", res);
	}
	free(res);
	return (0);
}
