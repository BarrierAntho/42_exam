SOURCES		=	ft_printf.c

OBJS		=	${SOURCES:.c=.o}

CC		=	cc
CFLAGS		=	-Wall -Werror -Wextra -Wconversion -g3 -fsanitize=address

NAME		=	libftprintf.a

RM		=	rm -rf

%.o		:	%.c
			${CC} ${CFLAGS} -I. -c $< -o $@

${NAME}		:	${OBJS}
			ar rc ${NAME}  ${OBJS}

all		:	${NAME}

clean		:
			${RM} ${OBJS}

fclean		:	clean
			${RM} ${NAME}

re		:	fclean	all

test		:
			${CC} ${CFLAGS} ${OBJS}
			./a.out

.PHONY		:	all clean fclean re test
