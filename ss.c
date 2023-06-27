/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:32:32 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:18:09 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack_node **a_head, t_stack_node **b_head, int flag)
{
	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	if (*b_head == NULL || (*b_head)->next == NULL)
		return ;
	sa(a_head, 1);
	sb(b_head, 1);
	if (flag == 0)
		ft_printf("ss\n");
}
