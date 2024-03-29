/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:42:30 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/26 20:19:37 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			res++;
		i++;
	}
	return (res);
}
