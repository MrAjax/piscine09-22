# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahommer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 14:41:16 by bahommer          #+#    #+#              #
#    Updated: 2022/10/02 10:02:36 by bahommer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADERS	= includes

OBJS	= ${SRCS:.c=.o} 

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR		= ar rc

RAN		= ranlib

NAME	= libft.a

.c.o:	
		${CC} ${CFLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}
		
${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${RAN} ${NAME}		

all:	${NAME}	

clean:
		${RM} ${OBJS}
	
fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
