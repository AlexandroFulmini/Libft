#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	int	s;

	s = 0;
	while (len > 0 && !s)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
		{
			s = 1;
		}
		len--;
	}
	if (s == 0)
	{
		return (0);
	}
	else
	{
		return (dest);
	}
}
