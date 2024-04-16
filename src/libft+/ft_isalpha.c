/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:47:14 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/07 16:14:01 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!('a' <= c && c <= 'z'))
	{
		if (!('A' <= c && c <= 'Z'))
		{
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
	result = ft_isalpha('a');
	printf("%d", result);
	return (0);
}*/
