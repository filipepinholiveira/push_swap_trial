/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:47:39 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/30 19:11:17 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_sort_b_till_3(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int		i;
	t_stack_node	*tmp;
	
	while (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		ft_printf("da lhe brita\n");
		*stack_a = (*stack_a)->next;
		//FIQUEI AQUI, JA ENVIO PARA A STACK B ATE FICAREM 3 NODES NO A OU ESTAREM ORDENADOS, AGORA E O ALGORITMO PARA COMPARAR O CUSTO DE CADA NODE A SER ENVIADO PARA B
		// ./push_swap 9 8 87 90 3 5 6 7 10 :
		// pb
		// pb
		// da lhe brita
		// da lhe brita
	}
	
}

t_stack_node	*ft_sort_b(t_stack_node **stack_a)
{
	t_stack_node	*stack_b;

	
	stack_b = malloc(sizeof(t_stack_node *));
	//stack_b = (NULL);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	return (stack_b);
}

void	ft_sort(t_stack_node **stack_a)
{
	t_stack_node	*stack_b;
	int				i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
	}
}
	