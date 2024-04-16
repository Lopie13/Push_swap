/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:11:35 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 14:24:45 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*melon;
	t_list	*root;

	root = *lst;
	if (!root || !del)
		return ;
	while (root)
	{
		melon = root->next;
		ft_lstdelone(root, del);
		root = melon;
	}
	*lst = NULL;
}
