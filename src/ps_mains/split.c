/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:18:15 by mmata-al          #+#    #+#             */
/*   Updated: 2024/04/16 19:12:48 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

char	**ftsplit(char *s, char c)
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
