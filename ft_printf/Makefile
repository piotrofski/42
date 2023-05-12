# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 04:14:24 by piotroff          #+#    #+#              #
#    Updated: 2023/05/12 19:57:03 by piotroff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_printf.c\
	./Conversions/ft_integer.c\
	./Conversions/ft_string.c\
	./Conversions/ft_character.c\
	./Conversions/ft_hexconv.c\
	./Conversions/ft_decimal.c\
	./Conversions/ft_unsigned_dec.c\
	./Conversions/ft_hex_min.c\
	./Conversions/ft_hex_max.c\
	./Conversions/ft_percent.c

NAME = libftprintf.a

OBJ = $(SRC:.c=.o)

.c.o:
	cc -Wall -Wextra -Werror -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	cc -Wall -Wextra -Werror ${NAME} -o exec
	./exec
	
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f ./exec

re: fclean all
