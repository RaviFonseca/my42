/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:40:51 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 18:21:21 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
#include <stdlib.h>

void del(void *content)
{
    free(content);
}

#include <stdio.h>

int main()
{
	t_list *n1, *n2, *n3;

	n1 = ft_lstnew(ft_strdup("hello"));
	n2 = ft_lstnew(ft_strdup("world"));
	n3 = ft_lstnew(ft_strdup("42"));

	n1->next = n2;
	n2->next = n3;

	t_list *lst;

	lst = n1;

	ft_lstclear(&lst, del);
	if (lst == NULL)
		printf("lista limpa\n");

	return (0);
}*/
