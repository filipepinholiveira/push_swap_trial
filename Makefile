

#-*MAKEFILE*-

# target:   dependencies
#           action



CC          = cc
SRCS        = push_swap.c \
			  sa.c \
			  sb.c \
			  ss.c \
			  pa.c \
			  pb.c \
			  ra.c \
			  rb.c \
			  rr.c \
			  rra.c \
			  rrb.c \
			  rrr.c \
			  utils.c \
			  utils2.c \
			  createlist.c \
			  list_op.c \
			  checklistvalues.c \
			  sorting.c \
			  stack_a_rotate.c \
			  algorithm_ab.c \
			  node_utils.c \
			  node_utils_2.c

CFLAGS      = -Wall -Wextra -Werror -g

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

