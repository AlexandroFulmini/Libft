#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *road;
    t_list *new;
    t_list *temp;
    t_list *ptr_new;

    road = lst;
    if (road && (*f))
    {
        temp = NULL;
        new = ft_lstnew((*f)(road->content));
        ptr_new = new;
        road = road->next;
        while (road)
        {
            temp = ft_lstnew((*f)(road->content));
            new->next = temp;
            new = new->next;
            road = road->next;
        }
        return (ptr_new);
    }
    return (NULL);
}