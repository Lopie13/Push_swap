/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:34:08 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 17:15:49 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*shira;
	unsigned char	*scrr;
	int				size;	

	scrr = (unsigned char *)src;
	shira = (unsigned char *)dest;
	size = n - 1;
	if (shira > scrr)
	{
		while (size >= 0)
		{
			shira[size] = scrr[size];
			size--;
		}
	}
	else
	{
		ft_memcpy(shira, scrr, n);
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char shira[] = "ShiraMelonSoda";
	char dest[20];
	ft_memmove(dest, shira, 14);
	printf("%s", dest);
	return (0);
}*/