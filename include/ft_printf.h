/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:19:52 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/27 11:21:39 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/include/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEXAMIN "0123456789abcdef"
# define HEXAMAX "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_parse(char specifier, va_list ap);

#endif