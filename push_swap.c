/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/01 18:46:14 by fpinho-d         ###   ########.fr       */
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

	//a = NULL;
	//b = NULL;

	// a = malloc (sizeof(t_stack_node));
	// a->next = malloc (sizeof(t_stack_node));
	// a->next->next = malloc (sizeof(t_stack_node));
	// a->next->next->next = malloc (sizeof(t_stack_node));
	// a->data = 1;
	// a->prev = NULL;
	// a->next->data = 2;
	// a->next->prev = a;
	// a->next->next->data = 3;
	// a->next->next->prev = a->next;
	// a->next->next->next->data = 4;
	// a->next->next->next->prev = a->next->next;
	// a->next->next->next->next = NULL;
	
	b = malloc (sizeof(t_stack_node));
	b->next = malloc (sizeof(t_stack_node));
	b->next->next = malloc (sizeof(t_stack_node));
	b->next->next->next = malloc (sizeof(t_stack_node));
	b->data = 5;
	b->prev = NULL;
	b->next->data = 6;
	b->next->prev = b;
	b->next->next->data = 7;
	b->next->next->prev = b->next;
	b->next->next->next->data = 8;
	b->next->next->next->prev = b->next->next;
	b->next->next->next->next = NULL;
	//b->next = NULL;

	// *a_head = a;
	*b_head = b;
	
	
	//  ft_printf("Lista A: \n1o valor: %d\n2o valor: %d\n3o valor: %d\n4o valor: %d\n", a->data, a->next->data, a->next->next->data, a->next->next->next->data);
	//  puts("");
	//  printf("Lista B: \n1o valor: %d\n2o valor: %d\n3o valor: %d\n4o valor: %d\n", b->data, b->next->data, b->next->next->data, b->next->next->next->data);
	// sa(a, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", a->data, a->next->data, a->next->next->data);
	// sb(b, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", b->data, b->next->data, b->next->next->data);
	// ss(a, b, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", a->data, a->next->data, a->next->next->data);
	// puts("");
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", b->data, b->next->data, b->next->next->data);

	//printf("valor inicial top a: %d\n", (*a_head)->data);
	// printf("valor inicial top b: %d\n", (*b_head)->data);
	puts("");
	
	//sa(a_head, 0); // Swap the first 2 elements at the top of stack a (done)
	//sb(b_head, 0); // Swap the first 2 elements at the top of stack b (done)
	//ss(a_head, b_head, 0); // sa and sb at the same time (done)
	//pa(a_head, b_head, 0); // Take the first element at the top of b and put it at the top of a (done)
	//pb(a_head, b_head, 0); // Take the first element at the top of a and put it at the top of b (done)
	//ra(a_head, 0); // Shift up all elements of stack a by 1. The first element becomes the last one (done)
	//rb(b_head, 0); // hift up all elements of stack b by 1. The first element becomes the last one (done)
	//rr(a_head, b_head, 0); // ra and rb at the same time (done)
	//rra(a_head, 0); // hift down all elements of stack a by 1. The last element becomes the first one (----segmentation fault)
	//rrb(b_head, 0); // Shift down all elements of stack b by 1. The last element becomes the first one (...............)
	rrr(a_head, b_head, 0); // rra and rrb at the same time (----segmentation fault)

	puts("");
	printf("Lista A: \n");
	
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