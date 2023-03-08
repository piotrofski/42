/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:09:02 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/15 10:06:51 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char c1, char c2)
{
	return (c1 - c2);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	dlen;

	i = 0;
	j = 0;
	dlen = ft_strlen(to_find);
	if (dlen == 0)
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			if (ft_strcmp(str[i], to_find[j]) == 0)
			{
				j++;
				if (j == ft_strlen(to_find))
					return (str + 1 + i - j);
			}
			else
				j = 0;
			i++;
		}
		return (0);
	}
}
