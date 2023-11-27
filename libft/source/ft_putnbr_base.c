/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:20:52 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 13:29:52 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
