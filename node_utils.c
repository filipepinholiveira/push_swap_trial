/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:40:26 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/03 16:55:46 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_place_b(t_stack_node *stack_b, int nbr_push)
{
	int	i;
	t_stack_node *tmp;
	i = 1;
	if (nbr_push > stack_b->data && nbr_push < ft_lstlast(stack_b)->data)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->data < nbr_push || tmp->data > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

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