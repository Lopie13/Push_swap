/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:09:01 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/07 16:15:20 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!('a' <= c && c <= 'z'))
	{
		if (!('A' <= c && c <= 'Z'))
		{
			if (!('0' <= c && c <= '9'))
				return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int	result;
	result = ft_isalnum("aAg234dTYr");
	printf("%d", result);
	return (0);
}*/
