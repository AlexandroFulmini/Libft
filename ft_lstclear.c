#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *road;
	t_list *temp;

	road = *lst;
	if (!road || !del)
		return ;
	while (road)
	{
		temp = road->next;
		(*del)(road->content);
		free(road);
		road = temp;
	}
	*lst = NULL;
}
