/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/18 18:15:30 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack_node **a_head;
	t_stack_node **b_head;
	t_stack_node *a;
	t_stack_node *b;

	//a = NULL;
	//b = NULL;

	a = malloc (sizeof(t_stack_node));
	a->next = malloc (sizeof(t_stack_node));
	a->next->next = malloc (sizeof(t_stack_node));
	a->data = 1;
	a->prev = NULL;
	a->next->data = 2;
	a->next->prev = a;
	a->next->next->data = 3;
	a->next->next->prev = a->next;
	a->next->next->next = NULL;
	
	b = malloc (sizeof(t_stack_node));
	b->next = malloc (sizeof(t_stack_node));
	b->next->next = malloc (sizeof(t_stack_node));
	b->data = 4;
	b->prev = NULL;
	// b->next->data = 5;
	// b->next->prev = b;
	// b->next->next->data = 6;
	// b->next->next->prev = b->next;
	b->next = NULL;

	a_head = malloc(sizeof(t_stack_node *));
	b_head = malloc(sizeof(t_stack_node *));

	*a_head = a;
	*b_head = b;
	
	
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", a->data, a->next->data, a->next->next->data);
	// puts("");
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", b->data, b->next->data, b->next->next->data);
	// sa(a, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", a->data, a->next->data, a->next->next->data);
	// sb(b, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", b->data, b->next->data, b->next->next->data);
	// ss(a, b, 0);
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", a->data, a->next->data, a->next->next->data);
	// puts("");
	// printf("1o valor: %d\n2o valor: %d\n3o valor: %d\n", b->data, b->next->data, b->next->next->data);
	pa(a_head, b_head, 0);
	printf("valor: %d\n", (*a_head)->data);
	// while (*a_head)
	// {
	// 	(*a_head) = (*a_head->next);
	// }
	
}