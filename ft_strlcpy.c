#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
