/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:31:03 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 15:11:52 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack_node **b_head, int flag)
{
	if (*b_head == NULL || (*b_head)->next == NULL)
		return ;


	int temp;

	temp = (*b_head)->data;
	(*b_head)->data = (*b_head)->next->data;
	(*b_head)->next->data = temp;
	if (flag == 0)
		ft_printf("sb\n");
}