#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest + ft_strlen(dest);
	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}