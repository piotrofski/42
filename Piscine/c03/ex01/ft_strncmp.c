/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:26:39 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/14 21:14:01 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n != 0)
	{
		while (c1[i] == c2[i] && c1[i] != '\0' && n > 0)
		{
			i++;
			n--;
		}
		if (n == 0)
			return (0);
		else
			return (c1[i] - c2[i]);
	}
	return (0);
}
