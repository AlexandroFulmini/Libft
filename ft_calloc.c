#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*p;
	size_t			total;

	total = count * size;
	if (!(p = malloc(total)))
		return (NULL);
	while (total-- > 0)
		*(unsigned char *)p++ = 0;
	return (p - count * size);
}
