/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:11:00 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/03 17:02:28 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_a_rotate_and_send_b(t_stack_node *stack_a, t_stack_node *stack_b)
{
	int				i;
	t_stack_node	*tmp;

	tmp = stack_a;
	i = ft_algorithm_rrarrb(stack_a, stack_b, stack_a->data);
	while (tmp)
	{
		if (i > ft_algorithm_rarb(stack_a, stack_b, tmp->data))
			i = ft_algorithm_rarb(stack_a, stack_b, tmp->data);
	}
	return (i);
}