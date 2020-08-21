#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *road;

	road = lst;
	if (road)
	{
		while (road->next)
			road = road->next;
	}
	return (road);
}
