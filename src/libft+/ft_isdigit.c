/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:56:56 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/07 16:23:19 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!('0' <= c && c <= '9'))
	{
		return (0);
	}
	return (1);
}
/* 
#include <stdio.h>

int main(void)
{
	int	result;
	result = ft_isdigit('2');
	printf("%d", result);
	return (0);
}
 */