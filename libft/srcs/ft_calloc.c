/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:35:20 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/09 20:45:40 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	total;
	void	*space;

	total = nitems * size;
	space = malloc(total);
	if (!space)
		return (NULL);
	ft_bzero (space, total);
	return (space);
}

/*
#include <stdio.h>

int main() {
   int n = 5;
   int *array;

   // use calloc function to allocate the memory
   array = (int*)ft_calloc(n, sizeof(int));

   if (array == NULL) {
      fprintf(stderr, "Memory allocation failed!\n");
      return 1;
   }

   //Display the array value
   printf("Array elements after calloc: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
   }
   printf("\n");

   //free the allocated memory
   free(array);
   return 0;
}*/
