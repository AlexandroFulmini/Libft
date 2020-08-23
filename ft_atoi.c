#include "libft.h"

int	ft_atoi(char *str)
{
	int sign;
	unsigned int nb;

	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	nb = 0;
	while (*str >= 48 && *str <= 57)
	{
		nb = (nb * 10) + *str - 48;
		str++;
	}
	return ((int)(nb * sign));
}
