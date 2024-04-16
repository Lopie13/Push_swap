/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:51:06 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/11 11:52:57 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	melon;

	melon = 0;
	while (s[melon])
	{
		write(fd, &s[melon], 1);
		melon++;
	}
	write(fd, "\n", 1);
}
