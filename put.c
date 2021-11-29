/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:06:55 by hthomas           #+#    #+#             */
/*   Updated: 2021/11/29 22:40:50 by gchanet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n < -9)
			ft_putnbr(-(n / 10));
		ft_putnbr(-(n % 10));
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
}

void	ft_putchar(char c)
{
	write(0, &c, 1);
}
