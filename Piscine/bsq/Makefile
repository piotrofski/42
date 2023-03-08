# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:41:37 by apiotrau          #+#    #+#              #
#    Updated: 2023/02/28 16:21:07 by apiotrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS =ft_atoi.c ft_putchar.c ft_putstr.c\
      ft_strlen.c ft_putnbr.c main.c\
      check_error.c operations.c operations2.c\
      ft_split.c free.c is_printable.c\

OBJS = ${SRCS:.c=.o}

DIR_INCLUDES = ./includes/

DIR_SRCS = ./srcs/

SRC_FILES = ${addprefix ${DIR_SRCS}, ${SRCS}}

OBJ_FILES = ${addprefix ${DIR_SRCS}, ${OBJS}}

CFLAGS = -Wall -Wextra -Werror

CC = cc

RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -I ${DIR_INCLUDES} $< -c -o $@

${NAME}: ${OBJ_FILES}
	${CC} ${CFLAGS} -I${DIR_INCLUDES}  ${OBJ_FILES} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ_FILES}

fclean: clean
	${RM} ${NAME}

re : fclean all
