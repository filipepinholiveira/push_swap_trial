/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:18:20 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:17:46 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_create_node(int ac, char **av, t_stack_node **head)
{
	t_stack_node	*a;
	int				i;

	i = 1;
	a = NULL;
	if (ac <= 2)
		ft_error();
	else
	{
		while (i < ac)
		{
			a = malloc (sizeof(t_stack_node));
			a->data = ft_atoi(av[i]);
			a->next = NULL;
			ft_lstadd_push((head), a);
			a = NULL;
			i++;
		}
	}
	return (a);
}
