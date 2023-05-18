/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:45:09 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/18 18:24:18 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **a_head, t_stack_node **b_head, int flag)
{

	if (!a_head || *a_head == NULL)
		return;
	if (!b_head || *b_head == NULL)
		return;
	
	// 1 2 3             4 5 6

	
	t_stack_node *start;
	t_stack_node *ptr_a;
	t_stack_node *ptr_b;

	printf("Valores iniciais de a_head\n");
	printf("valor de a_head->data %d\n", (*a_head)->data);
	printf("valor de a_head->next->data %d\n", (*a_head)->next->data);
	printf("valor de a_head->next->next->data %d\n", (*a_head)->next->next->data);
	printf("valor de b_head->data %d\n", (*b_head)->data);
	puts("");

	//start = malloc (sizeof(t_stack_node));
	//ptr_a = malloc (sizeof(t_stack_node *));
	
	//start->next = malloc (sizeof(t_stack_node));
	start = (*b_head); // start aponta a 4
	ptr_a = (*a_head); // ptr_a aponta a 1
	(*a_head) = start; // head aponta a 4???
	start->next = ptr_a; // start qeu e 4 aponta a 1??
	if ((*b_head)->next)
	{
		ptr_b = (*b_head)->next; // ptr_a aponta a 1
		(*b_head) = (ptr_b);
	}
	else
		free(*b_head);
	// printf("valor de start->data %d\n", start->data);
	// printf("valor de ptr_a->data %d\n", ptr_a->data);
	// printf("valor de b_head->data %d\n", (*b_head)->data);
	puts("");
	printf("Valores finais de a_head\n");
	printf("valor de a_head->data %d\n", (*a_head)->data);
	printf("valor de a_head->next->data %d\n", (*a_head)->next->data);
	printf("valor de a_head->next->next->data %d\n", (*a_head)->next->next->data);
	printf("valor de a_head->next->next->next->data %d\n", (*a_head)->next->next->next->data);
	printf("valor de b_head->data %d\n", (*b_head)->data);
	
	puts("");

	if (flag == 0)
		printf("pa\n");
}