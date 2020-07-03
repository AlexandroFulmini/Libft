#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *road;

    road = ft_lstlast(*alst);
    if (road)
        road->next = new;
}