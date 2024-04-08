/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:07:15 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/11 17:17:43 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*	//here it adding an element to the first place on the list, aka *lst,
	//which works for if the list is empty, otherwise i reccon it'll just
	//overwrite whatever was being pointed by *lst 
	if (*lst == NULL)
		*lst = new; */