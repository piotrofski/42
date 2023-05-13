# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 04:14:24 by piotroff          #+#    #+#              #
#    Updated: 2023/05/13 20:47:33 by piotroff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \

OBJS = $(SRCS:.c=.o)

INCLUDES = -I./libft
LIBS = -L./libft -lft

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS) $(LIBS) -o exec
	./exec

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)


fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	rm -f ./exec

re: fclean all
