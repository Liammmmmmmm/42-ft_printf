/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:34:27 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 16:21:06 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *, ...);


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
	size_t	end;	/** The index of the last character of the conversionn */
}			t_param;

t_param	*create_el(const char *str, size_t start, size_t end);
void	delete_el(void *pointer);

t_list	*create_param_list(const char *str);
// size_t	conversions_amount(t_list *list);

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