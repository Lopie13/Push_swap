/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:36:16 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 16:58:44 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*shira;
	const char		*scrr;
	unsigned int	melon;	

	scrr = src;
	shira = dest;
	melon = 0;
	if (!dest && !src)
		return (NULL);
	while (melon < n)
	{
		shira[melon] = scrr[melon];
		melon++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char shira[] = "ShiraMelonSoda";
	char dest[20];
	ft_memcpy(dest, shira, 14);
	printf("%s", dest);
	return (0);
}*/