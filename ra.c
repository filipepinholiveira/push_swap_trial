/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:34:38 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 17:26:59 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack_node **a_head, int flag)
{
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	t_stack_node *temp = (*a_head);
	(*a_head) = (*a_head)->next;
	(*a_head)->prev = NULL;
	t_stack_node *current = (*a_head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	temp->prev = current;
	temp->next = NULL;
	if (flag == 0)
		ft_printf("ra\n");
}