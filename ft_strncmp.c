#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int res;

	res = 0;
	while (!res && n-- > 0 && (*s1 || *s2))
	{
		res = (unsigned char)*s1++ - (unsigned char)*s2++;
	}
	return (res);
}
