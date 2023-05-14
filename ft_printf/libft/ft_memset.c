/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:20:08 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/14 17:14:15 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void    *ft_memset(void *s, int c, unsigned int n)
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

