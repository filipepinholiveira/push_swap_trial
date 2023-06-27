/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:33:19 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:38:50 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **a_head, t_stack_node **b_head, int flag)
{
	t_stack_node	*ptr;

	if (!a_head || *a_head == NULL)
		return ;
	if (!b_head || *b_head == NULL)
		return ;
	ptr = NULL;
	ptr = ft_lstadd_front(a_head, ft_lstnew((*b_head)->data));
	(*a_head) = ptr;
	(*a_head)->prev = NULL;
	if ((*a_head)->next != NULL)
		(*a_head)->next->prev = (*a_head);
	if ((*b_head)->next != NULL)
	{
		(*b_head) = (*b_head)->next;
		(*b_head)->prev = NULL;
	}
	else
		(*b_head) = NULL;
	if (flag == 0)
		ft_printf("pa\n");
}
