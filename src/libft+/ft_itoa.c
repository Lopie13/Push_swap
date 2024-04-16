/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:40 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 18:02:47 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(int n)
{
	long	nb;
	int		soda;

	nb = n;
	soda = 0;
	if (nb <= 0)
	{
		soda++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		soda++;
	}
	return (soda);
}

char	*ft_itoa(int n)
{
	char	*shira;
	int		melon;
	long	soda;

	melon = length(n);
	shira = ft_calloc(melon + 1, sizeof(char));
	if (!shira)
		return (NULL);
	soda = n;
	shira[0] = '0';
	if (n < 0)
	{
		shira[0] = '-';
		soda = (-soda);
	}
	melon--;
	while (soda > 0)
	{
		shira[melon] = (soda % 10) + '0';
		soda /= 10;
		melon--;
	}
	return (shira);
}
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int num = -0; // Replace with the integer you want to convert

    char *str = ft_itoa(num);
    if (str) {
        printf("Integer: %d\n", num);
        printf("String: %s\n", str);
        free(str); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
