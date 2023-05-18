/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:20:50 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:51:50 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack_node *a, t_stack_node *b, int flag)
{
	if (!a || a->next == NULL)
		return;
	if (!b || b->next == NULL)
		return;
	sa(a, 1);
	sb(b, 1);
	if (flag == 0)
		printf("ss\n");
}