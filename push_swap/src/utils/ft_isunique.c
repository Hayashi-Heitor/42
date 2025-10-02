#include "push_swap.h"

int	ft_isunique(t_stack *stack, int value)
{
	t_node *current;

	if (!stack || !stack->top)
		return (1);
	current = stack->top;
	while (current)
	{
		if (current->value == value)
			return (0);
		current = current->next;
	}
	return (1);
}