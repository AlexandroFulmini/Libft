#include "libft.h"

void *ft_memcpy(void *src, const void *dst, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (dst == src)
        return (NULL);
    if (dst == NULL && src == NULL)
        return (NULL);
    while (n--)
    {
        *d = *s;
        s++;
        d++;
    }
    return (d);
}