/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:21:47 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/19 17:34:43 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	total;
	int	i;
	int	count_minus;

	i = 0;
	total = 0;
	count_minus = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	if (count_minus % 2 == 0)
		return (total);
	else
		return (-total);
}
