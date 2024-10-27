/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calguaci <calguaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:49:10 by calguaci          #+#    #+#             */
/*   Updated: 2024/10/27 17:40:05 by calguaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (*s)
		write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_putnbr(long int n)
{
	static int	i;
	long int	nbr;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = (n * -1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	i = i + ft_putchar(n + '0');
	if (nbr < 0)
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned int nbr, char *b)
{
	static int	i;

	i = 0;
	if (nbr >= ft_strlen(b))
	{
		ft_putnbr_base(nbr / ft_strlen(b), b);
		nbr = nbr % ft_strlen(b);
	}
	i = i + ft_putchar(b[nbr]);
	return (i);
}

int	ft_putptr_base(size_t nbr)
{
	char		*base;
	static int	i;

	i = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putptr_base(nbr / 16);
		nbr = nbr % 16;
	}
	i++;
	ft_putchar(base[nbr]);
	return (i);
}
