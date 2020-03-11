#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{

t_list      *ft_create_elem(void *data)
{
    t_list *elem;

    if (!(elem = malloc(sizeof(t_list))))
        return (NULL);
    elem->data = data;
    elem->next = NULL;
    return (elem);
}
}