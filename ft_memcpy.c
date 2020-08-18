#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
		return (0);
	d = dest;
	s = src;
	while (len-- > 0)
		*d++ = *s++;
	return (dest);
}
