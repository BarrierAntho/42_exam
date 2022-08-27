# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarrier <abarrier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:05:38 by abarrier          #+#    #+#              #
#    Updated: 2022/08/27 11:15:37 by abarrier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SEP		:=	------------------------------

CC		:=	cc
CFLAGS		:=	-MMD -Wall -Werror -Wextra
CFLAGSADD	:=	-g3
NAME		:=	microshell
RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes

INCLUDE		:=	micro.h

SRCS		:=	micro.c\
			micro_utils.c

OBJS		=	$(SRCS:.c=.o)

DEPS		=	$(OBJS:.o=.d)

all		:	$(NAME)

%.o		:	%.c
			$(CC) $(CFLAGS) $(CFLAGSADD) -I . -c $< -o $@

$(NAME)		:	$(OBJS)
			$(CC) $(CFLAGS) $(CFLAGSADD) -I . $(OBJS) -o $@

clean		:
			$(RM) $(OBJS) $(DEPS)

fclean		:
			make clean
			$(RM) $(NAME)

re		:
			make fclean
			make

test		:
			make
			./$(NAME) "/bin/echo"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" ""
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "" ";" "/bin/ls"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "" ";" "/bin/ls" "-a"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "" ";" "/bin/ls" "-alt" ";" ""
			@echo $(SEP)
			./$(NAME) "" ";" "" ";" "" ";" "" ";" "" ";" ""
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "|" "/bin/wc"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "|" "/bin/wc" "|" "/bin/ls" "-a" "-lt"
			@echo $(SEP)
			./$(NAME) "/bin/echo" "Hello" "|" "/bin/wc" "|" "/bin/ls" "-a" "-lt" ";" "cd"
			@echo $(SEP)
			./$(NAME) "cd" ";" "cd" ~ ";" "cd" "tata" ";" "cd" "~" "tata"
			@echo $(SEP)
			./$(NAME) "/bin/ls" "|" "/bin/grep" "micro"
			@echo $(SEP)
			./$(NAME) "pouet" "|" "/bin/ls"
			@echo $(SEP)
			./$(NAME) "/bin/ls" "|" "pouet"

vtest		:
			make
			@echo $(SEP)
			$(VAL) ./$(NAME) "/bin/echo" "Hello" "|" "/bin/wc"
			@echo $(SEP)
			$(VAL) ./$(NAME) "pouet" "|" "/bin/ls"
			@echo $(SEP)
			$(VAL) ./$(NAME) "/bin/ls" "|" "pouet"
			@echo $(SEP)
			$(VAL) ./$(NAME) "/bin/ls" "|" "pouet" ";" "cd" ";" "/bin/ls" "|" "/bin/wc"

-include $(DEPS)

.PHONY		:	all clean fclean re test vtest
