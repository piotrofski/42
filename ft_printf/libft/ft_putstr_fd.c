/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:49:23 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:14:25 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (!s)
		return;
	while(s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}