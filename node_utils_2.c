/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:58:18 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:48:20 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_lstlast(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
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