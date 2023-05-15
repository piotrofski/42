/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:48:21 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/15 17:47:00 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{ 
	t_list *new;

	new = malloc(sizeof (*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}