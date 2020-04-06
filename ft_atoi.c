#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
    unsigned int nb;

    sign = 1;
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
        nptr++;
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
            sign = -1;
        nptr++;
    }
    nb = 0;
    while (*nptr >= 48 && *nptr <= 57)
    {
        nb = (nb * 10) + *nptr - 48;
        nptr++;
    }
    return ((int)(nb * sign));
}
