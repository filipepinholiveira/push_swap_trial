#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "library/LIBFT/ft_libft/libft.h"
#include "library/FT_PRINTF/ft_printf.h"

typedef struct s_stack_node
{
	int data;
	struct s_stack_node *prev;
	struct s_stack_node *next;
} t_stack_node;

void	sa(t_stack_node **a_head, int flag);
void	sb(t_stack_node **b_head, int flag);
void	ss(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	pa(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	pb(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	ra(t_stack_node **a_head, int flag);
void	rb(t_stack_node **b_head, int flag);
void	rr(t_stack_node **a_head, t_stack_node **b_head, int flag );
void	rra(t_stack_node **a_head, int flag);
void	rrb(t_stack_node **b_head, int flag);
void	rrr(t_stack_node **a_head, t_stack_node **b_head, int flag);
void	ft_lstadd_push(t_stack_node **lst, t_stack_node *new);
t_stack_node	*ft_lstlast_push(t_stack_node *lst);
t_stack_node	*ft_lstadd_front(t_stack_node **lst, t_stack_node *new);
t_stack_node	*ft_lstnew(int data);
int	ft_atoi(const char *str);
void	ft_error(void);
t_stack_node	*ft_create_node(int ac, char **av, t_stack_node ** head);
t_stack_node	*ft_arg_is_str(char ** av, t_stack_node ** head);

#endif