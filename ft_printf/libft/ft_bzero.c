/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:02:13 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/15 17:55:25 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

void    ft_bzero(void *s, size_t n)
{
    int i;
    
    char *p = (char *)s;
    i = 0;
    while (n > 0)
    {
        p[i] = '\0';
        i++;
        n--;
    }
}