SEP		:=	------------------------------

CC		:=	cc
CFLAGS		:=	-MMD -Wall -Werror -Wextra
CFLAGSADD	:=	-g3
NAME		:=	microshell
RM		:=	rm -rf

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

-include $(DEPS)

.PHONY		:	all clean fclean re test vtest
