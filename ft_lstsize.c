#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;
	t_list *road;

	i = 0;
	road = lst;
	while (road)
	{
		road = road->next;
		i++;
	}
	return (i);
}
