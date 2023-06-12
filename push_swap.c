/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/12 18:19:18 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_lstlast_push(t_stack_node *lst)
{
	t_stack_node	*current;

	current = lst;
	while (current != NULL)
	{
		if (current->next == NULL)
			return (current);
		current = current->next;
	}
	return (current);
}

void	ft_lstadd_push(t_stack_node **lst, t_stack_node *new)
{
	t_stack_node	*nova;

	nova = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	nova = ft_lstlast_push(*lst);
	nova->next = new;
	new->prev = nova;
}


int main(int ac, char **av)
{
	t_stack_node **a_head;
	t_stack_node **b_head;
	t_stack_node *a;
	t_stack_node *b;
	int i = 1;
	
	a_head = malloc(sizeof(t_stack_node *));
	b_head = malloc(sizeof(t_stack_node *));
	a = NULL;
	b = NULL;

	while (i < ac)
	{
		a = malloc (sizeof(t_stack_node));
		a->data = atoi(av[i]);
		a->next = NULL;
		ft_lstadd_push((a_head), a);
		a = NULL;
		i++;
	}

	a = NULL;
	b = NULL;
	
	// *a_head = a;
	//*b_head = b;
	
	puts("");
	
	//sa(a_head, 0); // Swap the first 2 elements at the top of stack a (done)
	//sb(b_head, 0); // Swap the first 2 elements at the top of stack b (done)
	//ss(a_head, b_head, 0); // sa and sb at the same time (done)
	//pa(a_head, b_head, 0); // Take the first element at the top of b and put it at the top of a (done)
	//pb(a_head, b_head, 0); // Take the first element at the top of a and put it at the top of b (done)
	//ra(a_head, 0); // Shift up all elements of stack a by 1. The first element becomes the last one (done)
	//rb(b_head, 0); // hift up all elements of stack b by 1. The first element becomes the last one (done)
	//rr(a_head, b_head, 0); // ra and rb at the same time (done)
	//rra(a_head, 0); // Shift down all elements of stack a by 1. The last element becomes the first one 
	//rrb(b_head, 0); // Shift down all elements of stack b by 1. The last element becomes the first one 
	//rrr(a_head, b_head, 0); // rra and rrb at the same time 

	puts("");
	printf("Lista A: \n");
	
	
	pb(a_head, b_head, 0);
	pb(a_head, b_head, 0);
	rra(a_head, 0);
	rrb(b_head, 0);
	// rb(b_head, 0);
	// pb(a_head, b_head, 0);
	// pb(a_head, b_head, 0);
	// ra(a_head, 0);
	// pb(a_head, b_head, 0);
	// ra(a_head, 0);
	// pb(a_head, b_head, 0);
	
	while (*a_head)
	{
		printf("%d\n", ((*a_head)->data));
	 	(*a_head) = (*a_head)->next;
	}
	puts("");
	printf("Lista B: \n");
	while (*b_head)
	{
		printf("%d\n", ((*b_head)->data));
	 	(*b_head) = (*b_head)->next;
	}
	
}