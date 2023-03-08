/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:22:56 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/12 10:22:53 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	half_size;
	int	temp;
	int	counter;

	counter = 0;
	half_size = size / 2;
	while (counter < half_size)
	{
		temp = *(tab + (size - 1 - counter));
		*(tab + (size - 1 - counter)) = *(tab + counter);
		*(tab + counter) = temp;
		counter++;
	}
}
