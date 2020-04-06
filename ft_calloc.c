#include "libft.h"

void *ft_calloc(int count, int size)
{
    char *str;

    size *= count;
    if (!(str = (char *)malloc(size)))
        return (0);
    while (size)
    {
        str[size] = 0;
        size--;
    }
    return (str);
}