/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:20:57 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 11:54:10 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*root;
	t_list	*delay;

	if (lst == NULL)
		return (NULL);
	root = lst;
	while (root != NULL)
	{
		delay = root;
		root = root->next;
	}
	return (delay);
}
