#include "libft.h"

char *ft_substr(const char *s, int start, int len)
{
    char *str;
    int i;

    i = 0;
    if (!s || start > ft_strlen((char *)s) ||
        (!(str = malloc(sizeof(char) * len + 1))))
        return (NULL);
    while (s[start] && len--)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
