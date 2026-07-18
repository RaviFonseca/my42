/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelbrou < edelbrou@student.42belgium.be>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 11:14:52 by edelbrou          #+#    #+#             */
/*   Updated: 2026/04/15 17:00:17 by edelbrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	back = ft_lstlast(*lst);
	back->next = new;
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
	int d = 4;
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;
	t_list  *new = ft_lstnew((void*)p4);
	linked_list = ft_lstnew((void *)p1);
	linked_list->next = ft_lstnew((void*)p2);
	linked_list->next->next = ft_lstnew((void*)p3);
	linked_list->next->next->next = NULL;
	printf("Linked list before:\n");
	print_list(linked_list);
	t_list **lst = &linked_list;
	ft_lstadd_back(lst, new);
	printf("\nLinked list after:\n");
	print_list(*lst);
	return(0);
}*/
