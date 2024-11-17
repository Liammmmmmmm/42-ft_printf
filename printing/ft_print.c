/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:19:26 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 17:57:27 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../ft_printf.h"

void	ft_printchar_count(int c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_printstr(const char *str, size_t start, size_t end, int *counter)
{
	if (!str)
		return ;
	while (start < end)
	{
		ft_printchar_count(str[start], counter);
		start++;
	}
}

void	ft_print_param(t_param *param, va_list args, int *counter)
{
	if (param->type == 'c')
		ft_printchar_count(va_arg(args, int), counter);
	else if (param->type == 's')
		ft_print_s(va_arg(args, char *), counter);
	else if (param->type == 'p')
		ft_print_p(va_arg(args, void *), counter);
	else if (param->type == 'i' || param->type == 'd')
		ft_print_i(va_arg(args, int), counter);
	else if (param->type == 'u')
		ft_print_u(va_arg(args, unsigned int), counter);
	else if (param->type == 'x')
		ft_print_x_lc(va_arg(args, unsigned int), counter);
	else if (param->type == 'X')
		ft_print_x_uc(va_arg(args, unsigned int), counter);
	else if (param->type == '%')
		ft_printchar_count('%', counter);
}
