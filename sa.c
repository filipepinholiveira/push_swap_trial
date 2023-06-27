/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:48:56 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:32:35 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack_node **a_head, int flag)
{	
	int	temp;

	if (*a_head == NULL || (*a_head)->next == NULL)
		return ;
	temp = (*a_head)->data;
	(*a_head)->data = (*a_head)->next->data;
	(*a_head)->next->data = temp;
	if (flag == 0)
		ft_printf("sa\n");
}
