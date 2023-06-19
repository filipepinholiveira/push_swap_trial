/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:35:00 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 17:18:15 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack_node **b_head, int flag)
{
	if (*b_head == NULL || (*b_head)->next == NULL)
		return ;
	t_stack_node *temp = (*b_head);
	*b_head = (*b_head)->next;
	(*b_head)->next = NULL;
	t_stack_node *current = (*b_head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	temp->prev = current;
	temp->next = NULL;
	if (flag == 0)
		ft_printf("rb\n");
}