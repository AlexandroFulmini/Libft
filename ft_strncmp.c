#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] == s2[i] && s1 && s2 && i < n)
        i++;
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
