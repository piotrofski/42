/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:44:49 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/17 12:37:29 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	limit;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	limit = nb;
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i++;
		limit = nb / i;
	}
	return (1);
}
