

#-*MAKEFILE*-

# target:   dependencies
#           action



CC          = cc
SRCS        = push_swap.c \
			  sa.c \
			  sb.c \
			  ss.c \
			  pa.c
			  

CFLAGS      = -Wall -Wextra -Werror

NAME        = push_swap

LIBRARY 	= ./library/library.a

all: $(LIBRARY) $(NAME)

$(LIBRARY): 
	make -C library

$(NAME): $(SRCS)
	cc -g $(SRCS) $(LIBRARY) -o $(NAME)

clean:
	make clean -C library

fclean: clean 
	rm -rf $(NAME) $(LIBRARY)
	make fclean -C library

re: fclean all

