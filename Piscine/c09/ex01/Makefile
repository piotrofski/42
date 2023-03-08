# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 13:24:51 by apiotrau          #+#    #+#              #
#    Updated: 2023/02/25 15:47:35 by apiotrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c\
      srcs/ft_putstr.c\
      srcs/ft_strcmp.c\
      srcs/ft_strlen.c\
      srcs/ft_swap.c

HEADR = ./includes/

NAME = libft.a

OBJ = $(SRC:.c=.o)

.c.o:
	cc -Wall -Wextra -Werror -I $(HEADR) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

