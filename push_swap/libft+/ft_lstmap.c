/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:35:35 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 15:02:57 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*shira;
	t_list	*curry;

	if (!lst)
		return (NULL);
	shira = ft_lstnew(f(lst->content));
	if (!shira)
	{
		ft_lstdelone(shira, del);
		return (NULL);
	}
	curry = shira;
	while (lst->next)
	{
		lst = lst->next;
		curry->next = ft_lstnew(f(lst->content));
		if (!curry->next)
		{
			ft_lstclear(&curry, del);
			return (NULL);
		}
		curry = curry->next;
	}
	return (shira);
}
