#include "push_swap.h"

static void add_node(t_stack *stack, int value)
{
	t_node *new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return;
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}

static int check_limits(const char *str)
{
	long num;
	int sign;

	num = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		num = num * 10 + (*str - '0');
		if (num * sign < INT_MIN || num * sign > INT_MAX)
			return (0);
		str++;
	}
	return (1);
}

int parse_args(int argc, char **argv, t_stack *a)
{
	int num;

	while (argc-- > 1)
	{
		if (!ft_isnumber(argv[argc]) || !check_limits(argv[argc]))
			return (-1);
		num = ft_atoi(argv[argc]);
		if (!ft_isunique(a, num))
			return (-1);
		add_node(a, num);
	}
	return (1);
}