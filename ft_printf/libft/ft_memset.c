/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:20:08 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 18:29:18 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

void    *ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    char *p = s;
    while (n > 0)
    {
        p[i] = c;
        i++;
        n--;
    }
    return (s);
}

