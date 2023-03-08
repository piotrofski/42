/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:32:55 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/02 12:43:30 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && flag == 1)
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			flag = 1;
		else 
			flag = 0;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
