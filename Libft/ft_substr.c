/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:46:20 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/15 18:25:02 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;
	int	i;

	i = 0;
	res = malloc (sizeof (char ) * (len + 1));
	if (!res)
		return (NULL);
	while (s[start] && len)
	{
		res[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (res);
}
/*
int	main(void)
{
	
	char	str[] = "heyyo whatsup my g you know";
	char	*res = ft_substr(str, 6, 7);
	printf("RESULT.\t%s", res);
	return (0);
}*/