/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:15:44 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/01 08:25:17 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_put_ptr(unsigned long long pointer, int prefix);

static int	ft_put_ptr(unsigned long long pointer, int prefix)
{
	int			count;

	count = 0;
	if (!pointer)
	{
		count += ft_putstr_fd(NULL_PTR, ON);
		return (count);
	}
	if (prefix)
		count += ft_putstr_fd("0x", ON);
	if (pointer >= BASE_HEXA)
		count += ft_put_ptr(pointer / BASE_HEXA, OFF);
	count += ft_putchar_fd(HEXAMIN[pointer % BASE_HEXA], ON);
	return (count);
}

int	ft_parse(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(ap, int), ON);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(ap, char *), ON);
	else if (specifier == 'p')
		count += ft_put_ptr(va_arg(ap, t_unlolo), ON);
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base((t_lolo)va_arg(ap, int), BASE_DEC, OFF);
	else if (specifier == 'u')
		count += ft_putnbr_base((t_lolo)va_arg(ap, t_uni), BASE_DEC, OFF);
	else if (specifier == 'x')
		count += ft_putnbr_base((t_lolo)va_arg(ap, t_uni), BASE_HEXA, ON);
	else if (specifier == 'X')
		count += ft_putnbr_base((t_lolo)va_arg(ap, t_uni), BASE_HEXA, OFF);
	else if (specifier == '%')
		count += ft_putchar_fd('%', ON);
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
			count += ft_putchar_fd(*format, ON);
		format++;
	}
	va_end(ap);
	return (count);
}
