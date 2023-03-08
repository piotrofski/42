/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:00:49 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/17 12:28:34 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	limit;

	i = 1;
	limit = nb;
	while (nb != ft_recursive_power(i, 2) && i < limit)
	{
		i++;
		limit = nb / i;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
