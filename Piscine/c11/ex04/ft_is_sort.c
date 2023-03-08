/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:57:32 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 19:13:51 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pos;
	int	neg;

	i = 1;
	pos = 1;
	neg = 1;
	if (length <= 2)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			neg = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			pos = 0;
		i++;
	}
	if (pos == 1 || neg == 1)
		return (1);
	return (0);
}
