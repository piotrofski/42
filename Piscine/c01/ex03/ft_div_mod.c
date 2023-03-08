/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:42:55 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/09 19:58:24 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_result;
	int	mod_result;

	div_result = (a / b);
	mod_result = (a % b);
	*div = div_result;
	*mod = mod_result;
}
