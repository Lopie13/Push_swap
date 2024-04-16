/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:51:37 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/10 15:52:25 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = (c + ('a' - 'A'));
	return (c);
}
/* 
#include <stdio.h>
int main()
{
	char str[] = "ShiraMelonSoda";

	ft_tolower(str);
	printf("%s", str);
} */