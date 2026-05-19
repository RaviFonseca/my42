/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 22:39:22 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/18 19:08:32 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(){
	char myStr1[] = "ABCD";
	char myStr2[] = "ABCE";
	int cmp = ft_strncmp(myStr1, myStr2, 3);
	if (cmp > 0) {
  		printf("%s is greater than %s\n", myStr1, myStr2);
	} else if (cmp < 0) {
  		printf("%s is greater than %s\n", myStr2, myStr1);
	} else {
  		printf("%s is equal to %s\n", myStr1, myStr2);
	}

    return 0;
}*/
