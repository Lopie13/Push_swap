/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:53:14 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 16:21:20 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*shira;

	shira = (char *)s;
	while (*shira)
	{
		if ((unsigned char)*shira == (unsigned char)c)
			return (shira);
		shira++;
	}
	if ((unsigned char)*shira == (unsigned char)c)
		return (shira);
	return (NULL);
}
/* 
#include <stdio.h>

int main(void) {
    const char *str = "ShiraMelonSoda";
    int target = 'M';

    char *result = ft_strchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }
    printf("%s", str);
    return 0;
} */
