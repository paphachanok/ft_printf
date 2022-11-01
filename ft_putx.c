/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:05:37 by ppoti             #+#    #+#             */
/*   Updated: 2022/11/01 00:05:39 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digittt(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_putx(unsigned int n, char c)
{
	int	i;

	i = 55;
	if (c == 'x')
		i += 32;
	if (n >= 0 && n <= 15)
	{
		if (n >= 10 && n <= 15)
			ft_putchar(n + i);
		else
			ft_putchar(n + 48);
	}
	else if (n > 15)
	{
		ft_putx((n / 16), c);
		ft_putx((n % 16), c);
	}
	return (ft_digittt(n));
}
