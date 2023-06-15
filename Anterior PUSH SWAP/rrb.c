/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:47:11 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/12 18:06:11 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack_node **b_head, int flag)
{
	if (*b_head == NULL || (*b_head)->next == NULL)
		return ;
	t_stack_node *current = (*b_head);
	t_stack_node *temp = NULL;
	while (current->next != NULL)
		current = current->next;
	current->prev->next = NULL;
	temp = current;
	current = (*b_head);
	temp->next = current;
	(*b_head) = temp;
	if (flag == 0)
		printf("rrb\n");
}