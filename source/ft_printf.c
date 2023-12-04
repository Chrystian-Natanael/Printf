/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:15:44 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/04 07:50:00 by cnatanae         ###   ########.fr       */
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

int	ft_hash(const char *format, va_list ap)
{
	long long int value;

	if (*format == 'x')
	{
		value = (t_lolo)va_arg(ap, t_uni);
		if (value == 0)
			return (ft_putstr_fd("0", 1));
		return (ft_putstr_fd("0x", 1) + ft_putnbr_base(value, BASE_HEXA, ON));
	}
	else if (*format == 'X')
	{
		value = (t_lolo)va_arg(ap, t_uni);
		if (value == 0)
			return (ft_putstr_fd("0", 1));
		return (ft_putstr_fd("0X", 1) + ft_putnbr_base(value, BASE_HEXA, OFF));
	}
	return (0);
}

int	ft_plus(const char *format, va_list ap)
{
	long long int value;

	while (*format == '+')
		format++;
	if (*format == 'd' || *format == 'i')
	{
		value = (t_lolo)va_arg(ap, int);
		if (value >= 0)
			return (ft_putchar_fd('+', 1) + ft_putnbr_base(value, BASE_DEC, OFF));
		return (ft_putnbr_base(value, BASE_DEC, OFF));
	}
	return (0);
}

int	ft_space(const char *format, va_list ap)
{
	long long int	value;
	char			*value_string;
	int				count;
	int				numb;

	numb = 0;
	count = 0;
	while (*format == ' ')
		format++;
	if (*format == 'd' || *format == 'i')
	{
		value = (t_lolo)va_arg(ap, int);
		if (value >= 0)
			return (ft_putchar_fd(' ', 1) + ft_putnbr_base(value, BASE_DEC, OFF));
		return (ft_putnbr_base(value, BASE_DEC, OFF));
	}
	numb = ft_atoi(format);
	while (ft_isdigit(*format))
		format++;
	if (*format == 's')
	{
		if (numb > 0)
		{
			while (numb--)
				count += ft_putchar_fd(' ', 1);
		}
		value_string = va_arg(ap, char *);
		if (value_string == NULL)
			return (ft_putstr_fd(NULL_STR, 1) + count);
		return (ft_putstr_fd(value_string, 1) + count);
	}
	return (0);
}

int	ft_flag_check(const char *format, va_list ap)
{
	int	count;
	
	count = 0;
	if (*format == '#')
		count += ft_hash(++format, ap);
	else if (*format == '+')
		count += ft_plus(++format, ap);
	else if (*format == ' ')
		count += ft_space(++format, ap);
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
		{
			if ((ft_strrchr(FLAGS, *(format + 1))) != NULL)
			{
				count += ft_flag_check(++format, ap);
				while ((ft_strrchr("+ #", *(format))) != NULL || ft_isdigit(*format))
					format++;
			}
			else
				count += ft_parse(*(++format), ap);
		}
		else
			count += ft_putchar_fd(*format, ON);
		format++;
	}
	va_end(ap);
	return (count);
}
