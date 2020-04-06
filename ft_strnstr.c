#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, unsigned int len)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    if (s2 == 0 || *s2 == 0)
        return ((char *)s1);
    while (s1[i] && i < len)
    {
        j = 0;
        while (j + i < len && s1[i + j] == s2[j])
        {
            j++;
            if (s2[j] == 0)
                return ((char *)&s1[i]);
        }
        i++;
    }
    return (0);
}
