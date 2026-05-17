/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:54:20 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 19:23:45 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}


int main()
{
	t_list *n1, *n2, *n3;

	n1 = ft_lstnew("hello");
	n2 = ft_lstnew("world");
	n3 = ft_lstnew("42");

	n1->next = n2;
	n2->next = n3;

	ft_lstiter(n1, print_content);


	return(0);
}*/
