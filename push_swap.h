/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:20:49 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/03 18:58:57 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "library/LIBFT/ft_libft/libft.h"
# include "library/FT_PRINTF/ft_printf.h"

typedef struct s_stack_node
{
	int	data;
	int	index;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

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
t_stack_node		*ft_lstlast_push(t_stack_node *lst);
t_stack_node		*ft_lstadd_front(t_stack_node **lst, t_stack_node *new);
t_stack_node		*ft_lstnew(int data);
int	ft_atoi(const char *str);
void	ft_error(void);
t_stack_node		*ft_create_node(int ac, char **av, t_stack_node **head);
t_stack_node		*ft_arg_is_str(char **av, t_stack_node **head);
int		ft_checkduplicate(t_stack_node *a);
int		ft_checksorted(t_stack_node *a);
void	ft_free(t_stack_node *head);
void	ft_sort(t_stack_node **stack_a);
int		ft_lstsize(t_stack_node *head);
t_stack_node	*ft_sort_b(t_stack_node **stack_a);
int	ft_find_place_b(t_stack_node *stack_b, int nbr_push);
t_stack_node	*ft_lstlast(t_stack_node *lst);
int	ft_find_index(t_stack_node *stack_a, int nbr);
int	ft_min(t_stack_node *stack_a);
int	ft_max(t_stack_node *stack_a);
void	ft_sort_b_till_3(t_stack_node **stack_a, t_stack_node **stack_b);
int	ft_stack_a_rotate_and_send_b(t_stack_node *stack_a, t_stack_node *stack_b);
int	ft_algorithm_rrarrb(t_stack_node *stack_a, t_stack_node *stack_b, int c);
int	ft_algorithm_rarb(t_stack_node *stack_a, t_stack_node *stack_b, int c);


#endif