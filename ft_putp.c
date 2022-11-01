/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:57:08 by ppoti             #+#    #+#             */
/*   Updated: 2022/11/01 00:03:00 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digitttt(unsigned long n)
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

int	ft_putp(unsigned long long n)
{
	// int	i;

	// i = ;
	// if (c == 'x' || c == 'p')
	// 	i += 32;
	if (n >= 0 && n <= 15)
	{
		if (n >= 10 && n <= 15)
			ft_putchar(n + 87);
		else
			ft_putchar(n + 48);
	}
	else if (n > 15)
	{
		ft_putp(n / 16);
		ft_putp(n % 16);
	}
	return (ft_digitttt(n));
}
