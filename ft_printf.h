/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:34:27 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 11:40:26 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"

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

#endif