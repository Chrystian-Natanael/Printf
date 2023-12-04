/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:20:32 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/04 13:03:07 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hash(const char *format, va_list ap)
{
	long long int	value;

	value = (t_lolo)va_arg(ap, t_uni);
	if (value == 0)
		return (ft_putstr_fd("0", 1));
	if (*format == 'x')
		return (ft_putstr_fd("0x", 1) + ft_putnbr_base(value, BASE_HEXA, ON));
	else if (*format == 'X')
		return (ft_putstr_fd("0X", 1) + ft_putnbr_base(value, BASE_HEXA, OFF));
	return (0);
}
