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
	size_t verif_size;

	verif_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (verif_size / size != nmemb)
		return (NULL);
	p = malloc (verif_size);
	if (!p)
		return (NULL);
	ft_bzero(p, verif_size);
	return (p);
}