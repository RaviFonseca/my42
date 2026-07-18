/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:15:43 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/07 14:50:16 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*node_2;

	if (lst != NULL && del != NULL)
	{
		node = *lst;
		while (node)
		{
			node_2 = node;
			node = node->next;
			del(node_2->content);
			free(node_2);
		}
		*lst = NULL;
	}
}
