/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 12:06:58 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/16 12:31:42 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	t_list *n1, *n2, *n3;
	n1 = ft_lstnew("a");
	n2 = ft_lstnew("b");
	n3 = ft_lstnew("c");

	n1->next = n2;
	n2->next = n3;

	printf("%d\n", ft_lstsize(n1));
	return(0);
}*/
