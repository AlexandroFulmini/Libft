#include "libft.h"

size_t ft_srtrlcat(char *dst, char *src, size_t size)
{
    unsigned int i;
    unsigned int j;
    unsigned int total;

    i = 0;
    j = 0;
    total = 0;
    while (dst[i] && i < size)
        i++;
    while (src[j])
        j++;
    total = i + j;
    if (i == size)
        return (total);
    j = 0;
    while (src[j] && i + j < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (total);
}