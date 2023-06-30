/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:18:20 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/30 15:33:16 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "push_swap.h"

t_stack_node	*ft_arg_is_str(char ** av, t_stack_node ** head)
{
	t_stack_node	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(av[1], 32);
	while (tmp[i])
	{
		a = malloc (sizeof(t_stack_node));
			a->data = ft_atoi(tmp[i]);
			a->next = NULL;
			ft_lstadd_push((head), a);
			a = NULL;
			i++;
	}
	return (a);
}

t_stack_node	*ft_create_node(int ac, char **av, t_stack_node ** head)
{

	t_stack_node *a;
	int i = 1;
	a = NULL;
	if (ac < 2)
		ft_error();
	else if (ac == 2)
	{
		a = ft_arg_is_str(av, head);
	}
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
