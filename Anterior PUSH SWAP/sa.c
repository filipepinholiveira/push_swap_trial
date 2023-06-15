/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:48:56 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/01 18:23:19 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **a_head, int flag)
{	
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	
	t_stack_node *ptr_a;
	ptr_a = *a_head;

	int temp;

	temp = ptr_a->data;
	ptr_a->data = (*a_head)->next->data;
	(*a_head)->next->data = temp;
	if (flag == 0)
		printf("sa\n");
}