/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:05:44 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/18 18:06:16 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
		return (result);
	}
	return (0);
}
