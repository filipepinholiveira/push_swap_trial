#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "library/LIBFT/ft_libft/libft.h"

typedef struct s_stack_node
{
	int data;
	struct s_stack *prev;
	struct s_stack *next;
} t_stack_node;

void	sa(t_stack_node* a, int flag);

#endif