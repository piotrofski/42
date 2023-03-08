/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:49:34 by apiotrau          #+#    #+#             */
/*   Updated: 2023/03/02 17:26:07 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int 	len;

	i = 0;
	len = 0;
	if (argc)
	{
		j = 0;
		while (argv[1][len])
			len++;
		while (argv[2][j] && i < len)
		{
			while (argv[2][j] == argv[1][i])
				i++;
			if (i == len)
			{
				printf("%s\n", argv[1]);
				return (0);
			}
			j++;
		}
		printf("ERROR");
	}
	printf("\n");
	return (0);
}
