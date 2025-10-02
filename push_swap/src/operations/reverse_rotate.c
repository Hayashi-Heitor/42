#include "push_swap.h"

static void reverse_rotate(t_stack *stack)
{
    t_node *first;
    t_node *last;
    t_node *prev;

    if (stack->size < 2)
        return;
    first = stack->top;
    last = stack->top;
    prev = NULL;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    if (prev)
        prev->next = NULL;
    last->next = first;
    stack->top = last;
}

void rra(t_stack *a)
{
    reverse_rotate(a);
    write(1, "rra\n", 4);
}

void rrb(t_stack *b)
{
    reverse_rotate(b);
    write(1, "rrb\n", 4);
}

void rrr(t_stack *a, t_stack *b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    write(1, "rrr\n", 4);
}