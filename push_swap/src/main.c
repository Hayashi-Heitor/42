#include "push_swap.h"

static void	initialize_stack(t_stack *stack)
{
	stack->top = NULL;
	stack->size = 0;
}

static void clear_stack(t_stack *stack)
{
	t_node *current;
	t_node *next;

	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack->top = NULL;
	stack->size = 0;
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		check;

	(void)argv;
	(void)b;
	initialize_stack(&a);
	initialize_stack(&b);
	if (argc < 2)
		return (0);
	
	check = parse_args(argc, argv, &a);
	if (check == -1)
	{
		write(2, "Error\n", 6);
		clear_stack(&a);
		return (1);
	}
	
	clear_stack(&a);
	clear_stack(&b);
	return (0);
}