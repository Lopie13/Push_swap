/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:17:57 by mmata-al          #+#    #+#             */
/*   Updated: 2024/04/10 12:17:57 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_final(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

char	**dup_arr(char **argv)
{
	char	**duparr;
	int		i;

	i = 0;
	while (argv[i])
		i++;
	duparr = ft_calloc(i + 1, sizeof(char *));
	while (--i >= 0)
	{
		duparr[i] = ft_strdup(argv[i]);
	}
	return (duparr);
}

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ftsplit(argv[1], ' ');
	else
		argv = dup_arr(argv + 1);
	init_stack_a(&a, argv);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_3(&a);
		else
			sort_stks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
