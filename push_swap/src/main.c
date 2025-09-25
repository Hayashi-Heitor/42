#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		check;

	(void)argv;
	(void)b;
	if (argc < 2)
		return (0);
	
	check = parse_args(argc, argv, &a);
	if (check == -1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	
	return (0);
}