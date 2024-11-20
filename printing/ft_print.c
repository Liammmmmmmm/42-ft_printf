/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:19:26 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/20 17:55:03 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../ft_printf.h"

void	ft_printchar_count(int c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_print_param(char type, va_list args, int *counter)
{
	if (type == 'c')
		ft_printchar_count(va_arg(args, int), counter);
	else if (type == 's')
		ft_print_s(va_arg(args, char *), counter);
	else if (type == 'p')
		ft_print_p(va_arg(args, void *), counter);
	else if (type == 'i' || type == 'd')
		ft_print_i(va_arg(args, int), counter);
	else if (type == 'u')
		ft_print_base(va_arg(args, unsigned int), "0123456789", counter);
	else if (type == 'x')
		ft_print_base(va_arg(args, unsigned int), "0123456789abcdef", counter);
	else if (type == 'X')
		ft_print_base(va_arg(args, unsigned int), "0123456789ABCDEF", counter);
	else if (type == '%')
		ft_printchar_count('%', counter);
}
