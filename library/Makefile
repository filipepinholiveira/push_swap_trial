
#-*MAKEFILE*-

# target:   dependencies
#           action

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

NAME		= library.a

all: $(NAME)

$(NAME):
	make -C FT_PRINTF
	make -C LIBFT/ft_libft
	ar rcT $(NAME) FT_PRINTF/libftprintf.a LIBFT/ft_libft/libft.a 

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

