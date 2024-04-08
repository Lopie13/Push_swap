/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:15:23 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 11:19:28 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		melon;
	t_list	*root;

	melon = 0;
	root = lst;
	while (root != NULL)
	{
		root = root->next;
		melon++;
	}
	return (melon);
}
