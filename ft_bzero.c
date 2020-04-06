#include "libft.h"

void ft_bzero(void *s, int n)
{
    unsigned char *s2;

    s2 = s;
    while (n)
    {
        *s2 = 0;
        s2++;
        n--;
    }
}