/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:57:04 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:28:35 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack_node **a_head, t_stack_node **b_head, int flag)
{
	rra(a_head, 1);
	rrb(b_head, 1);
	if (flag == 0)
		printf("rrr\n");
}
