# include "../libft/libft.h"
# include <unistd.h>
# include <limits.h>

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
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);