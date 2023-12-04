/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:20:52 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/04 09:25:55 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

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
