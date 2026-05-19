/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 02:48:30 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 01:50:04 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int main(void)
{
    t_list  *node1;
	t_list *node2;
	t_list *lst;

	node1 = ft_lstnew("world");
    node2 = ft_lstnew("hello");

	lst = node1;

	ft_lstadd_front(&lst, node2);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);

    return (0);
}*/
