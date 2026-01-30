#include "push_swap.h"

t_stack *find_min(t_stack *stack)
{
    t_stack *min = stack;
    while (stack)
    {
        if (stack->value < min->value)
            min = stack;
        stack = stack->next;
    }
    return (min);
}

t_stack *find_target(t_stack *a, int value_from_b)
{
    t_stack *current;
    t_stack *target;
    int smallest_bigger;
    
    current = a;
    target = NULL;
    smallest_bigger = INT_MAX;

    while(current)
    {
        if(current->value > value_from_b && current->value < smallest_bigger)
        {
            smallest_bigger = current->value;
            target = current;
        }
        current = current->next;
    }
    if(!target)
        target = find_min(a);
    return (target);
}

void find_all_targets(t_stack *a, t_stack *b)
{
    t_stack *current;

    current = b;
    while(current)
    {
        current->target = find_target(a, current->value);
        current = current->next;
    }
}

