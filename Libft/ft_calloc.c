/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:14:24 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 18:01:39 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	p = malloc (nmemb * size);
	if (!p)
		return (NULL);
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
	ft_bzero(p, nmemb);
	return (p);
}