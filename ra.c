/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:57:06 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/29 18:07:18 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ra (rotate a): Shift up all elements of stack a by 1.
//The first element becomes the last one


#include "push_swap.h"

void	ra(t_stack_node **a_head, int flag)
{
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	t_stack_node *temp = (*a_head);
	(*a_head) = (*a_head)->next;
	t_stack_node *current = (*a_head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = temp;
	temp->next = NULL;
	if (flag == 0)
		printf("ra\n");
}