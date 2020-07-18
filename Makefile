# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/10 14:02:10 by phbarrad          #+#    #+#              #
#    Updated: 2020/07/18 19:58:16 by phbarrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
NAME	=	rush-02
CFLAGS	=	
RM		=	rm -rf
SRC		=	phmain.c \
			display.c \
			error.c \
			lib.c \

OBJ		=	$(SRC:.c=.o)

${NAME}:	${OBJ}
			${CC} ${CFLAGS} -o ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all
