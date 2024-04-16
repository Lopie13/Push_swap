/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:17:25 by mmata-al          #+#    #+#             */
/*   Updated: 2024/04/10 13:53:57 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_3(t_stack_node **a)
{
        t_stack_node    *biggest_node;

        biggest_node = find_max(*a);
        if (biggest_node == *a)
                ra(a, false);
        else if ((*a)->next == biggest_node)
                rra(a, false);
        if ((*a)->nbr > (*a)->next->nbr)
                sa(a, false);
}
