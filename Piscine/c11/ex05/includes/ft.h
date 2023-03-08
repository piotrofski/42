/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:08:23 by apiotrau          #+#    #+#             */
/*   Updated: 2023/02/26 17:09:21 by apiotrau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	add(char *s1, char *s2);
void	sub(char *s1, char *s2);
void	mul(char *s1, char *s2);
void	div(char *s1, char *s2);
void	mod(char *s1, char *s2);

#endif
