#include "../libft/libft.h"

typedef struct s_node
{
	int             value;
	int			 	index;
	struct s_node   *next;
}   t_node;

typedef struct s_stack
{
	t_node  *top;
	int     size;
}   t_stack;

int	parse_args(int argc, char **argv, t_stack *a);
int	ft_isunique(t_stack *stack, int value);
int ft_isnumber(const char *str);