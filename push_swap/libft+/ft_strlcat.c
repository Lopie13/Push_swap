/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:02:19 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 16:07:20 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char	*shira;
	size_t			soda;
	size_t			melon;
	size_t			total;

	shira = (unsigned char *)src;
	melon = 0;
	soda = 0;
	while (dest[melon] != '\0' && melon < size)
		melon++;
	while ((melon + soda + 1) < size && shira[soda])
	{
		dest[melon + soda] = shira[soda];
		soda++;
	}
	if (melon != size)
		dest[melon + soda] = '\0';
	total = ft_strlen(src);
	return (melon + total);
}

/* #include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t size = sizeof(dest);

    size_t result = strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
} */