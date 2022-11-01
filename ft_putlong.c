/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 07:41:40 by ppoti             #+#    #+#             */
/*   Updated: 2022/10/31 23:48:23 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digitt(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	// if (n < 0)
	// {
	// 	len++;
	// 	n *= -1;
	// }
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putlong(unsigned int n)
{
	// if (n < 0)
	// 	n *= -1;
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else if (n > 9)
	{
		ft_putlong(n / 10);
		ft_putlong(n % 10);
	}
	return (ft_digitt(n));
}
