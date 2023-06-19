/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:35:27 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/19 15:11:38 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack_node **a_head, t_stack_node **b_head, int flag )
{

	ra(a_head, 1);
	rb(b_head, 1);
	if (flag == 0)
		ft_printf("rr\n");
}