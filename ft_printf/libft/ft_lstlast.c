/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:09:57 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/15 18:17:14 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"

t_list *ft_lstlast(t_list *lst)
{
	int size;
	int i;

	i = 0;
	size = ft_lstsize(lst);
	if(!lst)
		return (NULL);
	while (i < size - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}