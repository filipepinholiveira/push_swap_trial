/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:48:56 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/15 16:52:00 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node* a, int flag)
{	
	if (!a || a->next == NULL)
		return;
	
	t_stack_node *ptr_a;
	ptr_a = a;

	int temp;

	temp = ptr_a->data;
	ptr_a->data = a->next->data;
	a->next->data = temp;
	if (flag == 0)
		printf("sa\n");
}