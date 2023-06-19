/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 18:12:45 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 18:27:28 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack_node **a_head, int flag)
{
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	t_stack_node *current = NULL;
	t_stack_node *last = NULL;
	current = (*a_head);
	while (current->next != NULL)
		current = current->next;
	last = current;
	last->prev->next = NULL;
	last->next = (*a_head);
	(*a_head)->prev = last;
	last->prev = NULL;
	(*a_head) = last;
	if (flag == 0)
		ft_printf("rra\n");
}