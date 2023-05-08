/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <apiotrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:15:58 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/03 18:16:07 by apiotrau         ###   ########.fr       */
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