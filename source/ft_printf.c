/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:15:44 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 12:14:20 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_base(long long num, int base, int min_max)
{
	int			count;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar_fd('-', 1);
		num = -num;
	}
	if (num >= (long long)base)
	{
		count += ft_putnbr_base(num / base, base, min_max);
	}
	if (min_max == 1)
		count += ft_putchar_fd(HEXAMIN[num % base], 1);
	else
		count += ft_putchar_fd(HEXAMAX[num % base], 1);
	return (count);
}

int	ft_parse(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(ap, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(ap, char *), 1);
	else if (specifier == 'p')
		return (404);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base((long)va_arg(ap, int), 10, 0);
	else if (specifier == 'u')
		return (404);
	else if (specifier == 'x')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), 16, 1);
	else if (specifier == 'X')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), 16, 0);
	else if (specifier == '%')
		count += ft_putchar_fd('%', 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_parse(*(++format), ap);
		else
			count += ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
