/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:19:52 by cnatanae          #+#    #+#             */
/*   Updated: 2023/12/04 10:19:58 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/include/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define OFF 0
# define ON 1
# define BASE_DEC 10
# define BASE_HEXA 16
# define NULL_PTR "(nil)"
# define NULL_STR "(null)"
# define FLAGS "+ #"

typedef long long			t_lolo;
typedef unsigned long long	t_unlolo;
typedef unsigned int		t_uni;

int	ft_printf(const char *format, ...);
int	ft_parse(char specifier, va_list ap);
int	ft_flag_check(const char *format, va_list ap);
int	ft_hash(const char *format, va_list ap);
int	ft_plus(const char *format, va_list ap);
int	ft_put_ptr(unsigned long long pointer, int prefix);
int	ft_space_s(const char *format, va_list ap);
int	ft_space(const char *format, va_list ap);
int	ft_print_build(const char *format, va_list ap);
#endif