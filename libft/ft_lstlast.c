/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 00:40:08 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 01:18:51 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
/*
#include <stdio.h>

int main(void)
{
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    t_list  *last;

    n1 = ft_lstnew("hello");
    n2 = ft_lstnew("world");
    n3 = ft_lstnew("42");

    n1->next = n2;
    n2->next = n3;

    last = ft_lstlast(n1);

    printf("%s\n", (char *)last->content);

    return (0);
}*/
