/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:23:23 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/03 16:10:21 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int result;

	result = ac;
	result = ft_isascii(av[1][0]);
	printf("%d", result);
	return (0);
}*/
