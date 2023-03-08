# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 14:48:19 by apiotrau          #+#    #+#              #
#    Updated: 2023/02/28 19:15:41 by apiotrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/main.c\
      srcs/ft_atoi.c\
      srcs/ft_putnbr.c\
      srcs/ft_putchar.c\
      srcs/operations.c\
      srcs/ft_putstr.c

OBJ = $(SRC:.c=.o)

HDR = includes/

.c.o:
	cc -Wall -Wextra -Werror -I $(HDR) -c $< -o $@

NAME = do-op

$(NAME): $(OBJ)
	cc -Wall -Wextra -Werror -I $(HDR) $(OBJ) -o $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
