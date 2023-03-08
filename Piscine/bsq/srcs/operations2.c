/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:53:00 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 16:43:37 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	operation_main(char *str, t_vars *vars)
{
	if (parse_read(str, vars) == 0)
		return ;
	malloc_map_int(vars);
	translate_map(vars);
	print_result(vars);
	ft_free(vars);
}

int	**malloc_map_int(t_vars *vars)
{
	int	i;

	i = 0;
	vars->map_int = (int **)malloc(sizeof (int *) * (vars->num_lines + 1));
	while (i < vars->num_lines + 1)
	{
		vars->map_int[i] = (int *)malloc(sizeof (int) * (vars->len_lines + 1));
		vars->map_int[i][0] = 0;
		i++;
	}
	i = -1;
	while (++i < vars->len_lines + 1)
		vars->map_int[0][i] = 0;
	return (vars->map_int);
}

char	**assign_map_char(char *str, t_vars *vars)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	vars->map_char = ft_split(&str[i], "\n");
	i = 0;
	while (vars->map_char[i])
		i++;
	return (vars->map_char);
}

void	parse_assign(char *str, int len, t_vars *vars)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	vars->full = str[i - 1];
	vars->obs = str[i - 2];
	vars->empty = str[i - 3];
	str[i - 3] = '.';
	i++;
	vars->num_lines = ft_atoi(str);
	vars->len_lines = len;
}

int	parse_read(char *pathfile, t_vars *vars)
{
	int		fd;
	int		length;
	int		i;
	char	temp[1];
	char	*buf;

	length = 0;
	fd = open(pathfile, O_RDONLY);
	while (read(fd, temp, 1))
		length++;
	close(fd);
	fd = open(pathfile, O_RDONLY);
	if (fd == -1)
	{
		write (2, "map error\n", 10);
		return (0);
	}
	buf = malloc (sizeof(char) * (length + 1));
	i = read(fd, buf, length + 1);
	buf[i] = '\0';
	assign_map_char(buf, vars);
	close(fd);
	free(buf);
	return (1);
}
