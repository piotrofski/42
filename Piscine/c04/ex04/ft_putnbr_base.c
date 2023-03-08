/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:58:37 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/20 16:02:23 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	check_base(char *base)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (base[i])
	{
		temp = base[i];
		j = i;
		while (base[j])
		{
			if (temp == base[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_error(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		else if (base[i] < 32 || base [i] > 126)
			return (0);
		i++;
	}
	if (check_base(base) == 0)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	long	nb;

	nb = (long) nbr;
	size_base = ft_strlen(base);
	if (ft_error(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < size_base)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / size_base, base);
			ft_putnbr_base(nb % size_base, base);
		}
	}
}
