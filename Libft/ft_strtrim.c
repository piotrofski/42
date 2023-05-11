/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:56:46 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/11 16:47:09 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_is_sep(const char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char const *s1, char const *set)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (s1[i])
	{
		if (char_is_sep(s1[i], set) == 0)
			total++;
		i++;
	}
	return (total);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	res = malloc (sizeof (char ) * (count_words(s1, set)) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		if (char_is_sep(s1[i], set) == 0)
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
/*
int	main(void)
{	
	char	str[] = "heyyo whatsup my g you know";
	char 	*set = "g ";
	char	*res = ft_strtrim(str, set);
	printf("ORIGIN:\t%s\n", str);
	printf("SET:\t%s\n", set);
	printf("RESULT:\t%s\n", res);
	return (0);
}*/

