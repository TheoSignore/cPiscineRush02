# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phbarrad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/10 14:02:10 by phbarrad          #+#    #+#              #
#    Updated: 2020/07/19 22:55:20 by tsignore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
NAME	=	rush-02
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf
SRC		=	main.c \
			split_dico.c \
			error.c \
			errordict.c \
			init_key.c \
			lib.c \
			lib2.c \
			ft_get_str.c \
			ft_is_speakable.c \
			ft_say_parts.c \
			ft_say.c \
			ft_str_char.c

OBJ		=	$(SRC:.c=.o)

${NAME}:	${OBJ}
			${CC} ${CFLAGS} -o ${NAME} ${OBJ}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean all
