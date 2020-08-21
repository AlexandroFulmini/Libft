#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b2;

	b2 = b;
	while (len-- > 0)
	{
		*b2++ = (unsigned char)c;
	}
	return (b);
}
