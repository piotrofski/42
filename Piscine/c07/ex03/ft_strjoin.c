/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:05:12 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/24 10:38:29 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_size(char **strs, char *sep, int size)
{
	int	i;
	int	size_max;
	int	size_sep;

	i = 0;
	size_max = 0;
	while (i < size)
	{
		size_max = size_max + ft_strlen(strs[i]);
		i++;
	}
	size_sep = ft_strlen(sep);
	size_max = size_max + size_sep * (size - 1);
	return (size_max);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		*result = 0;
		return (result);
	}
	result = (char *)malloc(sizeof (char) * (get_size(strs, sep, size) + 1));
	if (!result)
		return (NULL);
	i = 0;
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
