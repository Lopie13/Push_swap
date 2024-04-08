/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:36:55 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 15:10:19 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	melon;

	melon = 0;
	while (s1[melon] && s2[melon] && melon < n)
	{
		if (s1[melon] != s2[melon])
		{
			return ((unsigned char)s1[melon] - (unsigned char)s2[melon]);
		}
		melon++;
	}
	if (melon != n)
		return ((unsigned char)s1[melon] - (unsigned char)s2[melon]);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "ShiraMelonSoda";
	char s2[] = "ShiraMelonWater";
	int	n = 10;
	int returnT = ft_strncmp(s1, s2, n);

	if(returnT == 0)
	printf("sao iguais %i", returnT);
	else if (returnT == 1)
	printf("o s1 e maior que o s2 %i", returnT);
	else 
	printf("o s2 e maior que s1 %i", returnT);
	return(0);
}*/