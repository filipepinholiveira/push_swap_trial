/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:12:45 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/29 18:47:42 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack_node **a_head, int flag)
{
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	t_stack_node *current = (*a_head);
	while (current->next != NULL)
	{
		current = current->next;
	}
	t_stack_node *temp = current;
	current->prev->next = NULL;
	temp->next = (*a_head);
	(*a_head) = temp;
	
	if (flag == 0)
		printf("rra\n");
	
}