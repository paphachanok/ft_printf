/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:22:42 by ppoti             #+#    #+#             */
/*   Updated: 2022/11/01 10:29:14 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int i);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putlong(unsigned int n);
int		ft_putp(unsigned long long n);
int		ft_putx(unsigned int n, char c);

#endif
