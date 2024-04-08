/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:17 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 17:08:16 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*shira;
	int		melon;

	shira = (char *)s;
	melon = 0;
	while (shira[melon])
		melon++;
	while (melon >= 0)
	{
		if (shira[melon] == (char)c)
			return ((char *)(shira + melon));
		melon--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void) {
    const char *str = "ShiraMelonSoda";
    int target = 'M';

    char *result = ft_strrchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}*/