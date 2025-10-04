#include "push_swap.h"

static void index_stack(t_stack *stack)
{
    t_node *current;
    t_node *compare;
    int index;

    current = stack->top;
    while (current)
    {
        index = 0;
        compare = stack->top;
        while (compare)
        {
            if (current->value > compare->value)
                index++;
            compare = compare->next;
        }
        current->index = index;
        current = current->next;
    }
}

void radix_sort(t_stack *a, t_stack *b)
{
    int size;
    int max_bits;
    int i;
    int j;

    size = a->size;
    max_bits = 0;
    while ((size - 1) >> max_bits)
        max_bits++;
    index_stack(a);
    i = -1;
    while (++i < max_bits)
    {
        j = -1;
        while (++j < size)
        {
            if (((a->top->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
        }
        while (b->size)
            pa(a, b);
    }
}