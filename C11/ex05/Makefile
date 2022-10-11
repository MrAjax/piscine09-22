# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahommer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 14:41:16 by bahommer          #+#    #+#              #
#    Updated: 2022/10/03 11:52:27 by bahommer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_atoi.c srcs/ft_math.c srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_do-op.c

HEADERS	= includes

OBJS	= ${SRCS:.c=.o} 

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

NAME	= do-op

.c.o:	
		${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}
		
${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME} 

all:	${NAME}	

clean:
		${RM} ${OBJS}
	
fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
