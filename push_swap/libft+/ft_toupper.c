/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:43:06 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 15:52:23 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = (c - ('a' - 'A'));
	return (c);
}
/* 
#include <stdio.h>
int main()
{
	char str[] = "ShiraMelonSoda";

	ft_toupper(str);
	printf("%s", str);
} */