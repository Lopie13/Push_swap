/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:03:54 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/09 18:34:04 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	melon;

	melon = 0;
	while (s[melon])
		melon++;
	return (melon);
}
/* 
#include <stdio.h>

int main (void)
{
 	char str[] = "ShiraMelonSoda";
 	int result = ft_strlen(str);

 	printf("%d", result);
 	return (0);
} */