/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:18:02 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/09 17:48:54 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*#include <stdio.h>

void	print_list(t_list *list)
{
	t_list *current = list;

	while (current != NULL)
	{
		printf("Value: %d\n", *(int *)current->content);
		current = current->next;
	}
}

int main(void)
{
	t_list	*linked_list = malloc(sizeof(t_list));
	int a = 1;
	int b = 2;
	int c = 3;
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	linked_list = ft_lstnew((void *)p1);
	linked_list->next = ft_lstnew((void*)p2);
	linked_list->next->next = ft_lstnew((void*)p3);
	linked_list->next->next->next = NULL;
	printf("\nlist size: %d\n", ft_lstsize(linked_list));
	return(0);
}*/
