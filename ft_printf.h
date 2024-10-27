/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:49:08 by calguaci          #+#    #+#             */
/*   Updated: 2024/10/27 16:59:54 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// LIBRERÍAS
# include <unistd.h>		// write
# include <stdio.h>			// printf
# include <stdlib.h>		// malloc
# include <stdarg.h>		// va_list
# include "./libft/libft.h"	// ft_strlen

int	ft_printf(char const *valor, ...);

int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr(long int n);
int	ft_putnbr_base(unsigned int nbr, char *b);
int	ft_putptr_base(size_t nbr);

#endif