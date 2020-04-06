#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, int n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char cc;

	cc = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		if (*s == cc)
		{
			*d = *s;
			return (d++);
		}
		*d = *s;
		d++;
		s++;
	}
	return (0);
}