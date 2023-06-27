/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:34:05 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:11:31 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack_node **a_head, t_stack_node **b_head, int flag)
{
	t_stack_node	*ptr;

	if (!a_head || *a_head == NULL)
		return ;
	if (!b_head)
		return ;
	ptr = ft_lstadd_front(b_head, ft_lstnew((*a_head)->data));
	(*b_head) = ptr;
	(*b_head)->prev = NULL;
	if ((*b_head)->next != NULL)
		(*b_head)->next->prev = (*b_head);
	(*a_head) = (*a_head)->next;
	(*a_head)->prev = NULL;
	if (flag == 0)
		ft_printf("pb\n");
}
