/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checklistvalues.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinho-d <fpinho-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:29:58 by fpinho-d          #+#    #+#             */
/*   Updated: 2023/06/27 18:46:03 by fpinho-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checkduplicate (t_stack_node *a)
{
    t_stack_node    *tmp;

    while (a)
    {
        tmp = a->next;
        while (tmp)
        {
            if (a->data == tmp->data)
                return (1);
            tmp = tmp->next;
        }
        a = a->next;
    }
    return (0);
}
    
    

int ft_checksorted(t_stack_node *a)
{
    int i;

    i = a->data;
    while (a)
    {
        if (i > a->data)
            return(0);
        i = a->data;
        a = a->next;
    }
    return (1);
}
    