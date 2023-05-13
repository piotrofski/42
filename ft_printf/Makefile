# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: piotroff <piotroff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 04:14:24 by piotroff          #+#    #+#              #
#    Updated: 2023/05/13 20:40:54 by piotroff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du projet
NAME = libftprintf.a

# Compilateur
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Fichiers sources
SRCS = ft_printf.c \
	   # Ajouter ici les autres fichiers source de ft_printf

# Fichiers objets
OBJS = $(SRCS:.c=.o)

# Inclusion des fichiers header
INCLUDES = -I./libft
LIBS = -L./libft -lft

# Compilation de libft
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Règle de compilation de tous les fichiers de ft_printf
all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

# Règle de compilation de ft_printf
$(NAME): $(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS) $(LIBS) -o exec
	./exec

# Règle de nettoyage des fichiers objets
clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)

# Règle de nettoyage du projet
fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)
	rm -f ./exec

# Règle de recompilation complète du projet
re: fclean all
