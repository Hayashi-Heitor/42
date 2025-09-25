#include "push_swap.h"

int	ft_isunique(t_stack *stack, int value)
{
	t_node *current;

	current = stack->top;
	while (current)
	{
		if (current->value == value)
			return (0);
		current = current->next;
	}
	return (1);
}