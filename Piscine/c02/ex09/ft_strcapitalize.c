/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:45:10 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/12 19:03:46 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_alpha_num(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122))
		return (1);
	else if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	trigger;
	int	i;

	i = 0;
	trigger = 1;
	while (str[i] != '\0')
	{
		if (trigger == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (trigger == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (ft_char_is_alpha_num(str[i]) == 0)
			trigger = 1;
		else
			trigger = 0;
		i++;
	}
	return (str);
}
