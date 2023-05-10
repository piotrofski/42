/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:46:20 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/10 16:23:35 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char *res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	res = malloc (sizeof (char ) * (len - start) + 1);
	if (!res)
		return (NULL);
	while (i < (int) start)
		i++;
	while(i < (int) len && s[i])
	{
		res[j] = s[i];
		i++;
		j++;
	}
	res[j] = '\0';
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