/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:42:20 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:13:18 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if(lst)
		{
			if (*lst)
			{
				last = ft_lstlast(*lst);
				last->next = new;
			}
			else
				*lst = new;
		}
}
