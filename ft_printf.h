/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:34:27 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 17:18:14 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

/**
 * Struct to stock a parameter for a conversions
 * 
 * @param type One of the possibles conversions (cspdiuxX%).
 * @param start The index of the % in the string.
 * @param end The index of the last character of the conversion, the index of
 *            cspdiuxX%.
 */
typedef struct s_param
{
	char	type;	/** One of the possibles conversions (cspdiuxX%). */
	size_t	start;	/** The index of the % in the string. */
	size_t	end;	/** The index of the last character */
}			t_param;

/**
 * @brief A custom implementation of printf function.
 * 
 * This function provides a simplified version of the standard printf function,
 * handling a subset of format specifiers. It supports printing characters, 
 * strings, pointers, integers, unsigned integers, and hexadecimal numbers 
 * in both lowercase and uppercase formats.
 *
 * It does not implement internal buffer management like the original printf 
 * function and only handles the following format specifiers:
 * 
 *  - `%c`: Prints a single character.
 * 
 *  - `%s`: Prints a string (null-terminated).
 * 
 *  - `%p`: Prints a pointer in hexadecimal format.
 * 
 *  - `%d`: Prints a signed decimal (base 10) number.
 * 
 *  - `%i`: Prints a signed integer (base 10) number (same as `%d`).
 * 
 *  - `%u`: Prints an unsigned decimal (base 10) number.
 * 
 *  - `%x`: Prints a number in hexadecimal (base 16) lowercase format.
 * 
 *  - `%X`: Prints a number in hexadecimal (base 16) uppercase format.
 * 
 *  - `%%`: Prints a literal percent sign.
 *
 * @param format A string that specifies the format of the output. It can
 *               contain text and format specifiers (preceded by '%') to 
 *               format the output accordingly.
 * 
 * @return - The total number of characters printed, excluding the terminating
 *         null byte.
 *   
 *         - If an invalid format specifier is encountered, behavior is
 *         undefined, but no characters will be printed for that specifier.
 */
int		ft_printf(const char *str, ...);

t_param	*create_el(const char *str, size_t start, size_t end);
void	delete_el(void *pointer);
t_list	*create_param_list(const char *str);
void	ft_printchar_count(int c, int *counter);
void	ft_printstr(const char *str, size_t start, size_t end, int *counter);
void	ft_print_param(t_param *param, va_list args, int *counter);
void	ft_print_s(const char *str, int *counter);
void	ft_print_p(void *p, int *counter);
void	ft_print_d(double n, int *counter);
void	ft_print_i(int n, int *counter);
void	ft_print_u(unsigned int n, int *counter);
void	ft_print_x_lc(unsigned int n, int *counter);
void	ft_print_x_uc(unsigned int n, int *counter);

#endif