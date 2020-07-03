#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_struct;

	if (!(new_struct = malloc(sizeof(t_list))))
		return (NULL);
	new_struct->content = content;
	new_struct->next = NULL;
	return (new_struct);
}
