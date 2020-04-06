#include "libft.h"
#include <stdlib.h>

char ft_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
        dest[i++] = '\0';
    return (*dest);
}

char *ft_strtrim(const char *s1, const char *set)
{
    char *res;
    int s;
    int l;

    if (!s1 || !set)
        return (NULL);
    s = 0;
    while (s1[s] && ft_strchr(set, s1[s]) != NULL)
        s++;
    l = ft_strlen(&s1[s]);
    if (l)
        while (s1[s + l - 1] && ft_strchr(set, s1[s + l - 1]) != 0)
            l--;
    if (!(res = malloc(sizeof(char) * (l + 1))))
        return (res);
    res = ft_strncpy(res, (char *)&s1[s], l);
    res[l] = '\0';
    return (res);
}
