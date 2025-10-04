#include "push_swap.h"

static int find_min_position(t_stack *a)
{
    t_node *current = a->top;
    int min = current->value;
    int position = 0;
    int min_position = 0;

    while (current)
    {
        if (current->value < min)
        {
            min = current->value;
            min_position = position;
        }
        current = current->next;
        position++;
    }
    return (min_position);
}

void sort_two(t_stack *a)
{
    if (a->top && a->top->next && a->top->value > a->top->next->value)
        sa(a);
}

void sort_three(t_stack *a)
{
    int first = a->top->value;
    int second = a->top->next->value;
    int third = a->top->next->next->value;

    if (first > second && second < third && first < third)
        sa(a);
    else if (first > second && second > third)
    {
        sa(a);
        rra(a);
    }
    else if (first > second && second < third && first > third)
        ra(a);
    else if (first < second && second > third && first < third)
    {
        sa(a);
        ra(a);
    }
    else if (first < second && second > third && first > third)
        rra(a);
}

void sort_four(t_stack *a, t_stack *b)
{
    int min_position = find_min_position(a);

    while (min_position-- > 0)
        ra(a);
    pb(a, b);
    sort_three(a);
    pa(a, b);
}

void sort_five(t_stack *a, t_stack *b)
{
    int min_position = find_min_position(a);

    while (min_position-- > 0)
        ra(a);
    pb(a, b);
    min_position = find_min_position(a);
    while (min_position-- > 0)
        ra(a);
    pb(a, b);
    sort_three(a);
    pa(a, b);
    pa(a, b);
}