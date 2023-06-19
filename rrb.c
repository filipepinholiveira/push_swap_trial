/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:47:11 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 18:28:44 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack_node **b_head, int flag)
{
	if (*b_head == NULL || (*b_head)->next == NULL)
		return ;
	t_stack_node *current = NULL;
	t_stack_node *last = NULL;
	current = (*b_head);
	while (current->next != NULL)
		current = current->next;
	last = current;
	last->prev->next = NULL;
	last->next = (*b_head);
	(*b_head)->prev = last;
	last->prev = NULL;
	(*b_head) = last;
	if (flag == 0)
		ft_printf("rra\n");
}