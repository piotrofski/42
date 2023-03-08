/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:56:36 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/19 10:32:20 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	printing(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		i_2;
	char	*temp;

	if (argc)
	{
		i_2 = 1;
		while (i_2 < argc - 1)
		{
			i = i_2 + 1;
			while (i < argc)
			{
				if (ft_strcmp(argv[i_2], argv[i]) > 0)
				{
					temp = argv[i_2];
					argv[i_2] = argv[i];
					argv[i] = temp;
				}
				i++;
			}
			i_2++;
		}
		printing(argc, argv);
	}
	return (0);
}
