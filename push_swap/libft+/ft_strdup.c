/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:31:14 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 17:26:17 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*shira;
	int		melon;

	melon = 0;
	while (src[melon] != '\0')
		melon++;
	shira = ft_calloc(melon + 1, sizeof(char));
	if (!shira)
		return (NULL);
	shira[melon] = '\0';
	melon--;
	while (melon >= 0)
	{
		shira[melon] = src[melon];
		melon--;
	}
	return (shira);
}
/* 
#include <stdio.h>

int main(void)
{
	char src[] = "Shira Melon Soda";
	char *destt = ft_strdup(src);

	printf("%s", destt);
	return (0);
} */