#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	unsigned char character;

	character = (unsigned char)c;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n)
	{
		if (*source == character)
		{
			*destination = *source;
			return (destination++);
		}
		*destination = *source;
		destination++;
		source++;
	}
	return (0);
}