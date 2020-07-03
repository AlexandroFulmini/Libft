#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *b2;
    unsigned char c2;

    c2 = (unsigned char)c;
    b2 = (unsigned char *)b;
    while (len--)
    {
        *b2 = c2;
        b++;
    }
    return (b);
}