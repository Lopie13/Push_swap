/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:08:49 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 16:48:27 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*shira;
	unsigned int	melon;
	unsigned long	soda;

	soda = (unsigned long)ft_strlen((char *)s);
	melon = start;
	if (start >= soda)
		return (ft_calloc(1, sizeof(char)));
	if (start + len > soda + 1)
		shira = ft_calloc((soda - start) + 1, sizeof(char));
	else
		shira = ft_calloc(len + 1, sizeof(char));
	if (!shira)
		return (NULL);
	while (s[melon] && melon < start + len)
	{
		shira[melon - start] = s[melon];
		melon++;
	}
	shira[melon - start] = '\0';
	return (shira);
}
/* 
#include <stdio.h>

int main(void)
{
	char strng[] = "ShiraMelonSoda";
	unsigned int srt = 5;
	size_t l = 5;
	char *dest;

	dest = ft_substr(strng, srt, l);
	printf("%s", dest);
	return (0);
} */