/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:19:52 by cnatanae          #+#    #+#             */
/*   Updated: 2024/03/05 10:59:30 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*For use libft library*/
# include "../libft/include/libft.h"

/*For use VAargs, VAlist*/
# include <stdarg.h>

/*For use write function*/
# include <unistd.h>

/*For use malloc function*/
# include <stdlib.h>

/*Defines*/
# define OFF 0
# define ON 1
# define BASE_DEC 10
# define BASE_HEXA 16
# define NULL_PTR "(nil)"
# define NULL_STR "(null)"
# define FLAGS "+ #"

/*Typedefs*/
typedef long long			t_lolo;
typedef unsigned long long	t_unlolo;
typedef unsigned int		t_uni;

/*Functions*/

/**
 * @brief This function prints a formatted string to the standard output.
 * @details This function is the main function of the printf project. It receives a format string and a variable number of arguments. It returns the number of characters printed.
 * @param format The format string.
 * @param ... The variable number of arguments.
 * @return The number of characters printed.
*/
int	ft_printf(const char *format, ...);

/**
 * @brief This function parses the format string
 * @details This function parses the format string and calls the appropriate function to print the argument.
 * @param specifier The specifier character.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_parse(char specifier, va_list ap);

/**
 * @brief This function checks if exists flags
 * @details The flags is a character that can be used to modify the behavior of the specifier. The flags are: +, #, and space.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_flag_check(const char *format, va_list ap);

/**
 * @brief This function treats the flag hash
 * @details The flag hash is used to print the prefix of the number in hexadecimal or octal format.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_hash(const char *format, va_list ap);

/**
 * @brief This function treats the flag plus
 * @details The flag plus is used to print the sign of the number.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_plus(const char *format, va_list ap);

/**
 * @brief This function print a pointer address
 * @details This function prints a pointer address in hexadecimal format.
 * @param pointer The pointer address.
 * @param prefix The flag hash.
 * @return The number of characters printed.
*/
int	ft_put_ptr(unsigned long long pointer, int prefix);

/**
 * @brief This function treats the flag space in a specifier s
 * @details The flag space is used to print n spaces before the string.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_space_s(const char *format, va_list ap);

/**
 * @brief This function treats the flag space
 * @details The flag space is used to print a space before the number if the number is positive.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_space(const char *format, va_list ap);

/**
 * @brief This function will handle calling functions according to the appearance of the % (specifier)
 * @details This function will handle calling functions according to the appearance of the % (specifier) in the format string. if the specifier is not found it will print the character.
 * @param format The format string.
 * @param ap The variable argument list.
 * @return The number of characters printed.
*/
int	ft_print_build(const char *format, va_list ap);

#endif
