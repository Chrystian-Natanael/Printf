/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:15:44 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/04 09:21:14 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (0);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if ((ft_strrchr(FLAGS, *(format + 1))))
			{
				count += ft_flag_check(++format, ap);
				while ((ft_strrchr(FLAGS, *(format))) || ft_isdigit(*format))
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
