/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:37:16 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/20 17:56:05 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_conversion(char c)
{
	size_t	i;

	i = 0;
	while ("cspdiuxX%\0"[i])
	{
		if ("cspdiuxX%"[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_all(const char *str, int *counter, va_list args)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_valid_conversion(str[i + 1]))
		{
			ft_print_param(str[i + 1], args, counter);
			i++;
		}
		else
			ft_printchar_count(str[i], counter);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		char_counter;

	char_counter = 0;
	va_start(args, str);
	ft_print_all(str, &char_counter, args);
	va_end(args);
	return (char_counter);
}
