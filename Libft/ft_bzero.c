/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <apiotrau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:02:13 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/03 16:42:44 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_bzero(void *s, unsigned int n)
{
    int i;

    i = 0;
    char *p = s;
    while (n > 0)
    {
        p[i] = '\0';
        i++;
        n--;
    }
}