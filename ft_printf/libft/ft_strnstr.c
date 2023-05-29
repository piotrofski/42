/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:30:39 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 20:02:06 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	char *b;

	b = (char *)big;
	i = 0;
	if (ft_strlen(little) == 0 || big == little)
		return (b);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (b[i + j] && little[j] && b[i + j] == little[j] && i + j < len)
			j++;
		if (j == ft_strlen(little))
			return (b + i);
		i++;
	}
	return (0);
}
