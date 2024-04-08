/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:04:31 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 15:46:25 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (
		c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *str)
{
	long	shira;
	int		melon;
	int		soda;

	melon = 0;
	while (ft_isspace(str[melon]))
		melon++;
	soda = 1;
	if (str[melon] == '-' || str[melon] == '+')
	{
		if (str[melon] == '-')
			soda = -soda;
		melon++;
	}
	shira = 0;
	while (ft_isdigit(str[melon]))
	{
		shira *= 10;
		shira += str[melon] - '0';
		melon++;
	}
	return (soda * shira);
}
/* 
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int result;

        result = argc;
	result = atoi(argv[1]);
	printf("%d \n", result);
	return (0);
} */