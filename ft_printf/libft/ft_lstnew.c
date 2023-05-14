/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:48:21 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/14 17:13:46 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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