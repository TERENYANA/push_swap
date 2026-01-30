#include "push_swap.h"

#include "push_swap.h"

void sort_three(t_stack **a)
{
    t_stack *max;
    
    max = find_max(*a);
    
    if (*a == max)
        ra(a);
    else if ((*a)->next == max)
        rra(a);
    
    if ((*a)->value > (*a)->next->value)
        sa(a);
}