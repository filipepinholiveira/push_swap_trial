/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:17:32 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/04 16:02:41 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_algorithm_rrarrb(t_stack_node *stack_a, t_stack_node *stack_b, int c)
{
	int	i;

	i = 0;
	ft_printf("a fucionar\n");
	return (1);
}

int	ft_algorithm_rarb(t_stack_node *stack_a, t_stack_node *stack_b, int c)
{
	int	i;

	i = 0;

	i = ft_find_place_b(stack_b, c);
	if (i < ft_find_index(stack_a, c))
		i = ft_find_index(stack_a, c);
	return (i);
}

int	ft_algorithm_rarrb(t_stack_node *stack_a, t_stack_node *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(stack_b, c))
		i = ft_lstsize(stack_b) - ft_find_place_b(stack_b, c);
	i = ft_find_index(stack_a, c) + i;
	return (i);
}

int	ft_algorithm_rrarb(t_stack_node *stack_a, t_stack_node *stack_b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(stack_a, c))
		i = ft_lstsize(stack_a) - ft_find_index(stack_a, c);
	i = ft_find_place_b(stack_b, c) + i;
	return (i);
}