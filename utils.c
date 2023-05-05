/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:04:54 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/05/05 18:26:59 by fpinho-d         ###   ########.fr       */
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
			if ((ft_atoi(av[i]) == INT_MIN || ft_atoi(av[i]) == INT_MAX))
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
	if (c >= '0' && c <= '9' || c == '-')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sinal;

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