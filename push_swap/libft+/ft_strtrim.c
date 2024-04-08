/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:11:26 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/07 16:03:35 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksett(char c, char const *set)
{
	size_t	melon;

	melon = 0;
	while (set[melon])
	{
		if (set[melon] == c)
			return (1);
		melon++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*shira;
	size_t	melon;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_checksett(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checksett(s1[end - 1], set))
		end--;
	shira = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!shira)
		return (NULL);
	melon = 0;
	while (start < end)
		shira[melon++] = s1[start++];
	shira[melon] = 0;
	return (shira);
}
/* 
#include <stdio.h>

int main(void)
{
	char badshira[] = "14ShiraMelonSoda14141414";
	char bad[] = "14";
	char *shira;

	shira = ft_strtrim(badshira, bad);
	printf("%s", shira);
	return (0);
} */