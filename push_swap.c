/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:42:17 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/26 18:51:09 by fpinho-d         ###   ########.fr       */
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
	if (!a || ft_checkduplicate(a)) // juntar funçao para verificar listas duplicadas(ft_checkduplicate(a))
	{
		// dar free (ft_free(a))
		ft_error;
	}
	/*
	if (!ft_checksorted(a)) verificar se lista ja esta ordenada
		ft_sort(&a);
	ft_free(a)
	*/
	
	puts("");
	
	ft_printf("Lista A: \n");
	
	while (*a_head)
	{
		ft_printf("%d\n", ((*a_head)->data));
	 	(*a_head) = (*a_head)->next;
	}
	puts("");
	return (0);
}