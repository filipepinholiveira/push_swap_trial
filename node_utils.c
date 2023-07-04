/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:40:26 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:48:16 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack_node *stack_a)
{
	int		i;

	i = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data < i)
			i = stack_a->data;
		stack_a = stack_a->next;
	}
	return (i);
}

int	ft_max(t_stack_node *stack_a)
{
	int		i;

	i = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data > i)
			i = stack_a->data;
		stack_a = stack_a->next;
	}
	return (i);
}

int	ft_find_index(t_stack_node *stack_a, int nbr)
{
	int		i;

	i = 0;
	while (stack_a->data != nbr)
	{
		i++;
		stack_a = stack_a->next;
	}
	stack_a->index = 0;
	return (i);
}