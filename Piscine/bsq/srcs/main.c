/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:36:18 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 16:57:25 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	stdin_to_tmp(void)
{
	int		fd;
	char	buf[1];

	fd = open ("map_temp", O_CREAT | O_RDWR | O_TRUNC, S_IRWXU
			| S_IRWXO | S_IRWXG);
	if (fd == -1)
		return (0);
	while (read(0, buf, 1))
		write(fd, buf, 1);
	close(fd);
	return (1);
}

void	bsq(char *str, t_vars *vars)
{
	if (read_input(str, vars) == 0)
	{
		write (2, "map error\n", 10);
		return ;
	}
	operation_main(str, vars);
}

int	main(int argc, char **argv)
{
	t_vars	vars;
	int		i;

	i = 1;
	if (argc == 1)
	{
		if (stdin_to_tmp() == 0)
		{
			write (2, "map error\n", 10);
			return (0);
		}
		bsq("map_temp", &vars);
		return (0);
	}
	while (i < argc)
	{
		bsq(argv[i], &vars);
		if (argc != 2)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
