#include "push_swap.h"

int parse_args(int argc, char **argv, t_stack *a)
{
    while(argc-- > 1)
    {
        if (!ft_isnumber(argv[argc]) || !ft_isunique(a, ft_atoi(argv[argc])))
            return (-1);
    }
    return (1);
}