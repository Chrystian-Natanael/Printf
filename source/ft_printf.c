/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:15:44 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 13:43:35 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_put_ptr(unsigned long long pointer, int prefix)
{
	int			count;

	count = 0;
	if (!pointer)
	{
		count += ft_putstr_fd("(nil)", 1);
		return (count);
	}
	if (prefix)
		count += ft_putstr_fd("0x", 1);
	if (pointer >= 16)
		count += ft_put_ptr(pointer / 16, 0);
	count += ft_putchar_fd(HEXAMIN[pointer % 16], 1);
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
		count += ft_put_ptr(va_arg(ap, unsigned long long), 1);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base((long)va_arg(ap, int), 10, 0);
	else if (specifier == 'u')
		count += ft_putnbr_base((long)va_arg(ap, unsigned int), 10, 0);
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
	if (!format)
		return (0);
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
