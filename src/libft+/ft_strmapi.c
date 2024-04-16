/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:11:16 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/11 11:23:13 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*shira;
	unsigned int	melon;
	unsigned int	soda;

	soda = 0;
	melon = 0;
	while (s[melon])
	{
		melon++;
		soda++;
	}
	shira = malloc(soda + 1 * sizeof(char));
	if (!shira)
		return (NULL);
	melon = 0;
	while (s[melon])
	{
		shira[melon] = f(melon, s[melon]);
		melon++;
	}
	shira[melon] = '\0';
	return (shira);
}
