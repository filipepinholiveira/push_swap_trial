/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/30 18:29:42 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node **a_head;
	t_stack_node **b_head;
	
	int	i;
	i = 1;
	a_head = malloc(sizeof(t_stack_node *));
	ft_create_node(ac, av, a_head);
	if (!*a_head || ft_checkduplicate(*a_head))
	{
		ft_free(*a_head);
		ft_error();
	}
	if (!ft_checksorted(*a_head))
	{
		ft_sort(a_head);
	}
	else
	{
		ft_printf("Sorted\n");
	}
	// puts("");
	// ft_free(*a_head);
	return (0);
}
