/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:59:21 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/11 16:40:56 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include "library/LIBFT/ft_libft/libft.h"

typedef struct s_stack
{
	int *array;//34 54 67
	unsigned int size;
	int p_top;
} t_stack;

int	ft_isdigit(int c);
int	check_params(int ac, char **av);
size_t	ft_atoi(char *str);
void	sa(t_stack *stack_a);
t_stack	*remove_negatives(t_stack *stack, int ac);

#endif