#include "push_swap.h"
t_stack *new_node(int value)
{
    t_stack *node = malloc(sizeof(t_stack));
    if(!node)
    return (NULL);
    node->value = value;
    node->index = 0;
    node->cost_b = 0;
    node->cost_a = 0;
    node->target = NULL;
    node->next = NULL;
    return (node);
}
 void stack_add_bottom(t_stack **stack, int value)
 {
    t_stack *new;
    t_stack *last;

    new = new_node(value);
    if(!new)
        return ;
    if(!*stack)
    {
        *stack = new;
        return ;        
    }
    last = *stack;
    while(last->next)
        last = last->next;
    last->next = new;
 }

