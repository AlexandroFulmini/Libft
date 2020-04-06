#include "libft.h"

char *ft_strdup(char *src)
{
    char *ptr;
    int len;

    len = 0;
    while (src[len])
        len++;
    if (!(ptr = malloc((len + 1) * sizeof(char))))
        return (NULL);
    len = 0;
    while (src[len])
    {
        ptr[len] = src[len];
        len++;
    }
    ptr[len] = '\0';
    return (ptr);
}