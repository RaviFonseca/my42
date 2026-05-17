/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 19:26:55 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 20:49:22 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void    *toupper_content(void *content)
{
    char    *str;
    char    *new;
    int     i;

    str = (char *)content;
    new = ft_strdup(str);
    if (!new)
        return (NULL);
    i = 0;
    while (new[i])
    {
        new[i] = ft_toupper(new[i]);
        i++;
    }
    return (new);
}

void    del(void *content)
{
    free(content);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void)
{
    t_list  *n1;
    t_list  *n2;
    t_list  *new_list;

    n1 = ft_lstnew(strdup("hello"));
    n2 = ft_lstnew(strdup("world"));

    n1->next = n2;

    new_list = ft_lstmap(n1, toupper_content, del);

    printf("ORIGINAL:\n");
    print_list(n1);

    printf("\nMAPPED:\n");
    print_list(new_list);

    ft_lstclear(&n1, del);
    ft_lstclear(&new_list, del);

    return (0);
}*/
