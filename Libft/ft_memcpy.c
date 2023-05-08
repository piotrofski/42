/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <apiotrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:45:23 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/03 20:30:34 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, const void	*src, unsigned int	n)
{
	char	*d; 
	char	*s;
	int			i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (n > 0)
	{
		d[i] = s[i];
		n--;
		i++;
	}
	return (dest);
}