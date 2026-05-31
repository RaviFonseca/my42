/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfonseca <rfonseca@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 19:34:23 by rfonseca          #+#    #+#             */
/*   Updated: 2026/05/31 17:35:09 by rfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_putstr(char *str);
int				ft_putchar(char c);
int				ft_putnbr(long n);
unsigned int	ft_putunsigned(unsigned int n);
int				ft_puthex(unsigned long dec_num, char *base);

#endif
