/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:41:42 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/18 18:11:35 by apiotrau         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb + i) != 1)
		i++;
	return (nb + i);
}
