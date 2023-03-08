/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:36:18 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/28 15:51:31 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	count_lines(char *str, t_vars *vars)
{
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	res = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			res++;
		i++;
	}
	if (res != vars->num_lines)
		return (0);
	return (1);
}

int	is_len_same(char *str, int len)
{
	int	i;
	int	j;

	if (len < 1)
		return (0);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	i++;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (j != len)
				return (0);
			j = 0;
		}
		else
			j++;
		i++;
	}
	if (str[i - 1] != '\n')
		return (0);
	return (1);
}

int	is_input_valid(char *str, char empty, char obs, t_vars *vars)
{
	int	i;
	int	len;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != empty && str[i] != obs && str[i] != '\n')
			return (0);
		i++;
	}
	i = 0;
	len = 0;
	while (str[i] != '\n' && str[i])
		i++;
	while (str[i + 1] != '\n' && str[i + 1])
	{
		i++;
		len++;
	}
	parse_assign(str, len, vars);
	if (count_lines(str, vars) == 0)
		return (0);
	return (is_len_same(str, len));
}

int	is_fl_valid(char *str, t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (i < 4)
		return (0);
	if (!is_printable(str[i - 1]) || !is_printable(str[i - 2])
		|| !is_printable(str[i - 3]))
		return (0);
	if ((str[i - 1] == str[i - 2]) || (str[i -1] == str[i - 3])
		|| (str[i - 2] == str[i - 3]))
		return (0);
	j = -1;
	while (++j < i - 3)
		if (str[j] < '0' || str[j] > '9')
			return (0);
	return (is_input_valid(str, str[i - 3], str[i - 2], vars));
}

int	read_input(char *pathfile, t_vars *vars)
{
	int		fd;
	int		length;
	char	temp[1];
	char	*buf;
	int		i;

	length = 0;
	fd = open(pathfile, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, temp, 1))
		length++;
	close(fd);
	buf = malloc (sizeof(char) * (length + 1));
	fd = open(pathfile, O_RDONLY);
	i = read(fd, buf, length + 1);
	buf[i] = '\0';
	close(fd);
	if (is_fl_valid(buf, vars) == 1)
	{
		free(buf);
		return (1);
	}
	free(buf);
	return (0);
}
