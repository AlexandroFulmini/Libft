#include "libft.h"

void *ft_memchr(char *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char *)s;
    while (n)
    {
        if (*str == c)
            return (str);
        n--;
        str++;
    }
    return (0);
}