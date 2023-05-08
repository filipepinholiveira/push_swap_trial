
#-*MAKEFILE*-

# target:   dependencies
#           action

CC			= cc
SRCS		= $(shell find . -name '*.c')

CFLAGS		= -Wall -Wextra -Werror

NAME		= library.a

OBJECTS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

