/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:14:14 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/01 18:25:37 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack_node **b_head, int flag)
{	
	if (*b_head == NULL || (*b_head)->next == NULL)
		return;
	
	t_stack_node *ptr_b;
	ptr_b = (*b_head);

	int temp;

	temp = ptr_b->data;
	ptr_b->data = (*b_head)->next->data;
	(*b_head)->next->data = temp;
	if (flag == 0)
		printf("sb\n");
}