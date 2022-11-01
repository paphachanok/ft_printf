/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 01:34:33 by ppoti             #+#    #+#             */
/*   Updated: 2022/11/01 10:29:51 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ptr, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_putp(va_arg(ptr, unsigned long long)) + 2);
	}
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (c == 'u')
		return (ft_putlong(va_arg(ptr, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_putx(va_arg(ptr, unsigned int), c));
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	ptr;

	va_start(ptr, str);
	len = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			len += ft_check(ptr, *(str + 1));
			str += 2;
		}
		else
		{
			write(1, str, 1);
			len++;
			str++;
		}
	}
	va_end(ptr);
	return (len);
}

// int	main(void)
// {
// 	int	for_p;

// 	// char c = '%';
// 	// ft_printf("Hello %c Tong", 'l');
// 	// printf("Hello %c Tong\n", 'l');
// 	ft_printf("\nHello %s Tong", "T");
// 	// ft_printf("\nHello %p", 1);
// 	// ft_printf("\nHello %d Tong\n", 23);
// 	// printf("\nHello %u\n", 9223372036854775807LL);
// 	// ft_printf("\nHello %u\n", 9223372036854775807LL);
// 	// ft_printf("\nHello %x\n", 163);
// 	// write(1, "%", 1);
// }
