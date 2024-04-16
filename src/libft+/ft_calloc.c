/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:35:53 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/07 15:54:28 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// retirar ftbzero no fim e usar direto da biblioteca
// void	ft_bzero(void *a, size_t melon)
// {
// 	unsigned char	*shira;

// 	shira = (unsigned char *)a;
// 	while (melon > 0)
// 	{
// 		*(shira++) = 0;
// 		melon--;
// 	}
// }

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*shira;

	shira = malloc(nmemb * size);
	if (shira == NULL)
	{
		return (shira);
	}
	ft_bzero(shira, size * nmemb);
	return (shira);
}
/* 
//shira
#include <stdio.h>
int main(void)
{
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    
    // Allocate memory using your ft_calloc
    int *arr = ft_calloc(num_elements, element_size);

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Check if the allocated memory is initialized to zero
    for (size_t i = 0; i < num_elements; i++)
    {
        if (arr[i] != 0)
        {
            printf("Memory not initialized to zero at index %zu.\n", i);
            return 1;
        }
    }

    printf("Memory allocation and initialization successful.\n");

    // Don't forget to free the allocated memory
    free(arr);

    return 0;
} */