#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *road;
	road = lst;
	if (!road || !f)
		return ;
	while (road)
	{
		(*f)(road->content);
		road = road->next;
	}
}
