/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:42:29 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/01 18:18:42 by apiotrau         ###   ########.fr       */
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

int	char_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str, char *charset, int start)
{
	char	*new_s;
	int	i;

	i = 0;
	new_s = NULL;
	while (char_is_sep(str[start + i], charset) == 0)
		i++;
	new_s = malloc (sizeof(char) * (i + 1));
	i = 0;
	while (char_is_sep(str[start], charset) == 0)
	{
		new_s[i] = str[start];
		i++;
		start++;
	}
	new_s[i] = '\0';
	return (new_s);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while ((char_is_sep(str[i], charset) == 1) && str[i])
			i++;
		if (str[i])
			words++;
		while (char_is_sep(str[i], charset) == 0 && str[i])
			i++;
	}
	return (words);
}

char     **ft_split(char *str, char *charset)
{
        int     i;
	char	**res;
	int	num_words;
	int	start;
	int	k;

	i = 0;
	start = 0;
	k = 0;
	num_words = count_words(str, charset);
	res = malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return (NULL);
        while (str[i])
        {
                while ((char_is_sep(str[i], charset) == 1) && str[i])
                        i++;
                if (str[i])
		{
			start = i;
			res[k] = ft_strdup(str, charset, start);
			printf("res[%d] = %s\n", k,res[k]);
			k++;
		}
                while (char_is_sep(str[i], charset) == 0 && str[i])
                        i++;
        }
	res[k] = 0;
	printf("res[%d] = %s\n", k,res[k]);
        return (res);
}


int	main(void)
{
	int	i;
	char	str[] = "hey yo whatsup my g you know";
	char	**res;

	i = 0;
	res = ft_split(str, "\t \n");
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
