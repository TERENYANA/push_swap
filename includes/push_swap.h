#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack {
	int	value;
	int	index;
	int cost_b;
	int cost_a;
	struct s_stack *target;
	struct s_stack *next;
} t_stack;

#endif