/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:40:51 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/17 17:43:42 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void *content)
{
    free(content);
}

#include <string.h>
#include <stdio.h>

int main ()
{
	char *str = malloc(6);
	strcpy(str, "hello");

	t_list *node;
	node = ft_lstnew(str);

	printf("%s\n", (char *)node->content);

	ft_lstdelone(node, del);

	return (0);
}*/
