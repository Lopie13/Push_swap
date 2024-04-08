/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:28:52 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/09 18:20:36 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	melon;
	int	soda;

	melon = 0;
	soda = 0;
	while (s[melon])
	{
		while (s[melon] == c)
		{
			melon++;
		}
		if (s[melon])
		{
			soda++;
			while (s[melon] && s[melon] != c)
				melon++;
		}
	}
	return (soda);
}

char	**ft_split(char const *s, char c)
{
	char	**shira;
	int		melon;
	int		banana;
	int		bread;

	melon = 0;
	shira = ft_calloc(ft_words(s, c) + 1, sizeof(char *));
	if (!shira)
		return (NULL);
	banana = 0;
	while (s[banana])
	{
		while (s[banana] == c)
			banana++;
		bread = 0;
		while (s[banana + bread] != c && s[banana + bread])
			bread++;
		if (bread > 0)
		{
			shira[melon] = ft_substr(s, banana, bread);
			melon++;
		}
		banana += bread;
	}
	return (shira);
}
/* 
#include "libft.h" // Include your library header here
#include <stdio.h>

int main(void)
{
    char const *str = "Shira Melon Soda";
    char c = ' ';

    char **result = ft_split(str, c);

    // Print the split strings
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
    }
//     printf

    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++)
    {
        free(result[i]);
    }
    free(result);
	// printf("%d", ft_words(str, c));
    return 0;
} */
