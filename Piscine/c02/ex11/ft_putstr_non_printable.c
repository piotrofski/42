/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:00:27 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/13 16:42:41 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	unsigned_ch;
	char			*hexadecimal;

	hexadecimal = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		unsigned_ch = (unsigned char)str[i];
		if ((str[i] >= 0 && str[i] < 32) || str[i] > 126)
		{
			ft_putchar(92);
			ft_putchar(hexadecimal[unsigned_ch / 16]);
			ft_putchar(hexadecimal[unsigned_ch % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
