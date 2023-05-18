/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:14:14 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:51:49 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack_node *b, int flag)
{	
	if (!b || b->next == NULL)
		return;
	
	t_stack_node *ptr_b;
	ptr_b = b;

	int temp;

	temp = ptr_b->data;
	ptr_b->data = b->next->data;
	b->next->data = temp;
	if (flag == 0)
		printf("sb\n");
}