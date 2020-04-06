#include "libft.h"

/*
int	ft_totalen(int size, char **str, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total = total + ft_strlen(str[i]);
		i++;
	}
	total = total + (size - 1) * ft_strlen(sep) + 1;
	return (total);
}
*/

char *ft_strjoin(char *s1, char *s2)
{
	char *dest;
	char *pt_dest;

	if (!s1 || !s2)
		return (NULL);
	if (!(dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) * sizeof(char))))
		return (0);
	pt_dest = dest;
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	return (pt_dest);
}
