/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:32:25 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:14:28 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	char_is_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

char	*ft_strdup_mod(char const *s, char c, int start)
{
	char	*new_str;
	int		i;

	i = 0;
	while (char_is_sep(s[start + i], c) == 0 && s[i])
		i++;
	new_str = (char *)malloc(sizeof (char) * (i + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (char_is_sep(s[start], c) == 0 && s[i])
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	c_words(char const *s, char c)
{
	int	i;
	int	num_words;

	i = 0;
	num_words = 0;
	while (s[i])
	{
		while (s[i] && char_is_sep(s[i], c))
			i++;
		if (s[i] != '\0')
			num_words++;
		while (s[i] && !char_is_sep(s[i], c))
			i++;
	}
	return (num_words);
}

char	**ft_splitter(char const *s, char c, char **result)
{
	int	i;
	int	k;
	int	start;

	i = 0;
	start = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && char_is_sep(s[i], c))
			i++;
		if (s[i] != '\0')
		{
			start = i;
			result[k] = ft_strdup_mod(s, c, start);
			k++;
		}
		while (s[i] && !(char_is_sep(s[i], c)))
			i++;
	}
	result[k] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **) malloc (sizeof(char *) * (c_words(s, c) + 1));
	if (!result)
		return (NULL);
	return (ft_splitter(s, c, result));
}
/*
int	main(void)
{
	int	i;
	char	str[] = "heyyo whatsup my g you know";
	char	**res;

	i = 0;
	res = ft_split(str, ' ');
	while (res[i])
	{
		printf("%d.\t%s\n",i, res[i]);
		i++;
	}
	printf("%d.\t%s",i, res[i]);
	return (0);
}*/