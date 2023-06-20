/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/20 17:32:04 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{
	t_stack_node **a_head;
	t_stack_node *a;
	
	int i = 1;
	
	a_head = malloc(sizeof(t_stack_node *));
	a = NULL;
	
	a = ft_create_node(ac, av, a_head);

	puts("");
	
	ft_printf("Lista A: \n");
	
	while (*a_head)
	{
		ft_printf("%d\n", ((*a_head)->data));
	 	(*a_head) = (*a_head)->next;
	}
	puts("");
	// printf("Lista B: \n");
	// while (*b_head)
	// {
	// 	printf("%d\n", ((*b_head)->data));
	//  	(*b_head) = (*b_head)->next;
	// }
}