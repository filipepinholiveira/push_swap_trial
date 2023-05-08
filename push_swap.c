/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:33:10 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/08 18:43:44 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{

	int i = 0;
	t_stack *a = malloc(sizeof(t_stack));
	t_stack *b = malloc(sizeof(t_stack));
	
	
	
	if (ac > 2)
	{
		if (!check_params(ac, av))
			return (0);
		printf("Valid nbr\n");
		a->array = malloc((ac - 1) * sizeof(int));
		b->array = malloc((ac - 1) * sizeof(int));
	}
	else
	{
		printf("Error: 1 argument only\n");
		return (0);
	}
	while (i < ac - 1)
	{
		a->array[i] = ft_atoi(av[i + 1]);
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		printf("valor do array %d\n", a->array[j]);
	}
	
	sa(a);
	printf("\n");
	for (int j = 0; j < i; j++)
	{
		printf("valor do array %d\n", a->array[j]);
	}

	
}