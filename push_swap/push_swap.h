#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
//# include "../libft+/libft.h"

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	int					above_median;
	int					cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//include all funcs from both ps_main and commands

#endif