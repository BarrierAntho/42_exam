SEP_P		:=	------------------------------

NAME		:=	cpp00
IPATH		:=	.

CXX		:=	c++
CXXFLAGS	:=	-std=c++98 -Wall -Werror -Wextra
CPPFLAGS	:=	-MMD -I $(IPATH)

SRCSPATH	:=	.

RM		:=	rm -rf
VAL		:=	valgrind --leak-check=full --show-leak-kinds=all

SRCS		:=	main.cpp\
			Warlock.cpp

OBJS		:=	$(SRCS:.cpp=.o)
DEPS		:=	$(OBJS:.o=.d)

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean		:
			$(RM) $(OBJS) $(DEPS)

fclean		:
			make clean
			$(RM) $(NAME)

re		:
			make fclean
			make all

test		:
			make all
			@echo '$(SEP_P)'
			$(VAL) ./$(NAME) > MFT_res

-include $(DEPS)

.PHONY		:	all clean fclean re test
