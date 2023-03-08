/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:51:08 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/17 12:24:59 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0 && index <= 1)
		return (index);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
	return (-1);
}
