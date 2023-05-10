/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:05 by piotroff          #+#    #+#             */
/*   Updated: 2023/05/10 16:58:02 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s == NULL || *s == '\0')
		return;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void f(unsigned int i, char *c)
{
	c[i] = '1';
}

int main()
{
	
	char str1[100] = "abc";
	ft_striteri(str1, f);
	printf("%s\n", str1); // should print "eee"

	char str2[100] = "";
	ft_striteri(str2, f);
	printf("%s\n", str2); // should print ""

	char str3[100] = "x";
	ft_striteri(str3, f);
	printf("%s\n", str3); // should print "e"

	char str4[100] = "hello world";
	ft_striteri(str4, f);
	printf("%s\n", str4); // should print "eeee eeeed
	return 0;
}*/