# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apiotrau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:41:37 by apiotrau          #+#    #+#              #
#    Updated: 2023/03/01 17:39:27 by apiotrau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRCS = *.c

OBJS = ${SRCS:.c=.o}

DIR_INCLUDES = ./includes/

DIR_SRCS = ./

SRC_FILES = ${addprefix ${DIR_SRCS}, ${SRCS}}

OBJ_FILES = ${addprefix ${DIR_SRCS}, ${OBJS}}

CFLAGS = -Wall -Wextra -Werror -g3

CC = cc

RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -I ${DIR_INCLUDES} $< -c -o $@

${NAME}: ${OBJ_FILES}
	${CC} ${CFLAGS} -I ${DIR_INCLUDES}  ${OBJ_FILES} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJ_FILES}

fclean: clean
	${RM} ${NAME}

re : fclean all
