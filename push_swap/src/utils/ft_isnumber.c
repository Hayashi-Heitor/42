#include "push_swap.h"

int ft_isnumber(const char *str)
{
    if (*str == '-' || *str == '+')
        str++;
    if (!*str)
        return (0);
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}