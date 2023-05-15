/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:04:54 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/10 18:47:06 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	check_params(int ac, char **av)
{
	int i;
	int j;
	

	i = 1;
	while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (!ft_isdigit(av[i][j]))
				{
					printf("Only digits acepted\n");
					return (0);
				}
				j++;
			}
			long int nbr = ft_atoi(av[i]);
			if ((nbr < INT_MIN) || (nbr > INT_MAX))
			{
				printf("NBR is too big or too small\n");
				return (0);
			}
			i++;
		}
		return (1);
}

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || c == '-')
	{
		return (1);
	}
	return (0);
}

size_t	ft_atoi(char *str)
{
	size_t	i;
	size_t	n;
	size_t	sinal;

	i = 0;
	sinal = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sinal = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * sinal);
}