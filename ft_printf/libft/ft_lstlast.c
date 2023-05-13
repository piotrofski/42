/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:09:57 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/11 20:12:45 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

t_list *ft_lstlast(t_list *lst)
{
	int size;
	int i;

	i = 0;
	size = ft_lstsize(lst);
	while (i < size - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}