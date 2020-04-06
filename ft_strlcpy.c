#include "libft.h"

unsigned int ft_strlcpy(char *dst, char *src, unsigned int dstsize)
{
    unsigned int i;
    unsigned int srcsize;

    i = 0;
    srcsize = 0;
    while (src[srcsize])
        srcsize++;
    if (dstsize == 0)
        return (srcsize);
    while (*src && i < dstsize - 1)
    {
        dst[i] = *src++;
        i++;
    }
    dst[i] = '\0';
    return (srcsize);
}