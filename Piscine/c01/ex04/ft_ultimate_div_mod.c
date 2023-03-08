/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:59:48 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/11 18:42:54 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	mod_result;
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	div_result = (temp_a / temp_b);
	mod_result = (temp_a % temp_b);
	*a = div_result;
	*b = mod_result;
}
