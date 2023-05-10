/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:14:31 by apiotrau          #+#    #+#             */
/*   Updated: 2023/05/10 16:39:35 by piotroff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

int ft_isalpha(int c);
int ft_strlen(char *c);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalnum(int c);
void    *ft_memset(void *s, int c, unsigned int n);
void    ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void	*dest, const void	*src, unsigned int	n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_toupper(int c);
int	ft_tolower(int	c);
char *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void *ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, unsigned int len);
int	ft_atoi(const char *nptr);
char	*ft_strdup(const char *src);
void *ft_calloc(unsigned int nmemb, unsigned int size);
void *ft_memccpy(void *dest, const void *src, int c, unsigned int n);
char	*ft_itoa(int n);
char *ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char *ft_substr(char const *s, unsigned int start, unsigned int len);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif