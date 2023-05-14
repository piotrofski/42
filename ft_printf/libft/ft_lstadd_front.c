/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:59:56 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:13:21 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}