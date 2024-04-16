/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:09:58 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/09 19:34:06 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*shira;
	size_t	melon;
	size_t	soda;

	shira = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!shira)
		return (NULL);
	melon = 0;
	soda = 0;
	while (s1[melon])
	{
		shira[soda++] = s1[melon];
		melon++;
	}
	melon = 0;
	while (s2[melon])
	{
		shira[soda++] = s2[melon];
		melon++;
	}
	shira[soda] = 0;
	return (shira);
}
/* 
#include <stdio.h>

int main(void)
{
    char *strs[] = {"ShiraMelonSoda", "ShiraMelonSoda", "!!!"};
    char *sep = " shrkDinkDonk ";

    char *result = ft_strjoin(strs, sep);

    if (result)
    {
        printf("Concatenated String: %s\n", result);
        free(result); // yes this int main was made using chatgpt
    }		      // dont like it? didnt ask 
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */