#include "push_swap.h"

void error_exit(char *msg, t_stack *a, t_stack *b)
{

    write(2, msg, 6);
    
    free_stack(a);
    free_stack(b);
    
    exit(1);
}

void free_stack(t_stack *stack)
{
    t_stack *tmp;
    
    while (stack)
    {
        tmp = stack;
        stack = stack->next;
        free(tmp);
    }
}
