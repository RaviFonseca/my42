/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:16:31 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/15 17:00:45 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

void plus_one(void *data)
{
	int *d = (int*)data;
	*d += 1;
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
	printf("Linked list before:\n");
	print_list(linked_list);
	ft_lstiter(linked_list, plus_one);
	printf("\nLinked list after:\n");
	print_list(linked_list);
	return(0);
}*/
