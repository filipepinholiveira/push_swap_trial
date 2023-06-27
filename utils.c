/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:06:32 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:30:40 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_lstlast_push(t_stack_node *lst)
{
	t_stack_node	*current;

	current = lst;
	while (current != NULL)
	{
		if (current->next == NULL)
			return (current);
		current = current->next;
	}
	return (current);
}

void	ft_lstadd_push(t_stack_node **lst, t_stack_node *new)
{
	t_stack_node	*nova;

	nova = *lst;
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	nova = ft_lstlast_push(*lst);
	nova->next = new;
	new->prev = nova;
}

t_stack_node	*ft_lstadd_front(t_stack_node **lst, t_stack_node *new)
{
	if (!lst)
		return (NULL);
	new->next = *lst;
	*lst = new;
	return (new);
}

t_stack_node	*ft_lstnew(int data)
{
	t_stack_node	*ptr;

	ptr = malloc (sizeof(t_stack_node));
	if (!ptr)
		return (NULL);
	ptr->data = data;
	ptr->next = NULL;
	return (ptr);
}
