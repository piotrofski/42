/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihalee <jihalee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:08:53 by jihalee           #+#    #+#             */
/*   Updated: 2023/02/18 17:16:05 by jihalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char **argv)
{
	t_var	vars;

	if (is_input_valid(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	parse_input(argv, &vars);
	init_used(&vars);
	vars.found = 0;
	bt(0, &vars);
	if (vars.found == 0)
		ft_putstr("Error\n");
	return (0);
}
