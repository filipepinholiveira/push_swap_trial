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
	struct s_stack_node *prev;
	struct s_stack_node *next;
} t_stack_node;

void	sa(t_stack_node* a, int flag);
void	sb(t_stack_node *b, int flag);
void	ss(t_stack_node *a, t_stack_node *b, int flag);
void	pa(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	pb(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	ra(t_stack_node **a_head, int flag);
void	rb(t_stack_node **b_head, int flag);
void	rr(t_stack_node **a_head, t_stack_node **b_head, int flag );
void	rra(t_stack_node **a_head, int flag);

#endif