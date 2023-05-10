/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:11:41 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/10 18:47:08 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	sort_array(int *array_list)
{
	int i;

	i = 0;
	int temp;
	
	while (array_list[i])
	{
		if (array_list[i] > array_list[i + 1])
		{
			temp = array_list[i];
			array_list[i] = array_list[i + 1];
			array_list[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}

	
}




int * copy_array(t_stack *stack, int ac)
{
	int *array;
	int i;

	i = 0;
	array = malloc (sizeof(t_stack));
	
	while (i < ac -1)
	{
		array[i] = stack->array[i];
		i++;
	}
	return (array);
}

t_stack	*remove_negatives(t_stack *stack, int ac)
{
	t_stack *duplicate_positive;
	int *array_org;
	int i;
	
	i = 0;
	duplicate_positive = malloc (sizeof(t_stack));
	duplicate_positive->array = malloc(ac * sizeof(int));
	array_org = copy_array(stack, ac);
	sort_array(array_org);

	// while (i < ac -1)
	// {
	// 	printf("%d ", array_org[i]);
	// 	i++;
	// }
	
	while (i < ac - 1)
	{
		duplicate_positive->array[i] = array_org[i];
		i++;
	}
	return(duplicate_positive);
}
