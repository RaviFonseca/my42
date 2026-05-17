/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 01:44:11 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 02:54:37 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*

#include <stdio.h>

int main(void)
{
    t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    t_list  *new;
	t_list *last;
	t_list *lst;

    n1 = ft_lstnew("hello");
    n2 = ft_lstnew("world");
    n3 = ft_lstnew("42");
	new = ft_lstnew("yuhuuu");

    n1->next = n2;
    n2->next = n3;

	lst = n1;
	ft_lstadd_back(&lst,new);
	last = ft_lstlast(n1);

    printf("%s\n",(char *)last->content);

    return (0);
}*/
