/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:52:43 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 11:16:01 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	int			count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb < 10)
	{
		count += ft_putchar_fd (nb + '0', fd);
		return (count);
	}
	else
		count += ft_putnbr_fd(nb / 10, fd);
	count += ft_putnbr_fd (nb % 10, fd);
	return (count);
}
