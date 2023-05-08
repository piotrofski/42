/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <apiotrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:14:24 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/03 20:22:55 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc (nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		p = NULL;
		return (p);
	}
	if ((nmemb * size) > 2147483647)
	{
		p = NULL;
		return (p);
	}
	return (p);
}