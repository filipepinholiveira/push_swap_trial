/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:36:03 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/24 18:54:08 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack_node **a_head, t_stack_node **b_head, int flag)
{

	if (!a_head || *a_head == NULL)
		return;
	if (!b_head || *b_head == NULL)
		return;

	t_stack_node *start;
	
	t_stack_node *ptr_a;
	t_stack_node *ptr_b;

	start = malloc (sizeof(t_stack_node));
	
	ptr_a = malloc (sizeof(t_stack_node *));
	ptr_b = malloc (sizeof(t_stack_node *));

	start = *a_head; // start aponta a 1
	
	ptr_b = *b_head; // ptr_a aponta a 4
	
	ptr_a = (*a_head)->next; // ptr_a aponta a 2
	
	*b_head = start; // head aponta a 1
	start->next = ptr_b; // start qeu e 4 aponta a 1

	*a_head = ptr_a;
	
	if (flag == 0)
		printf("pb\n");
}