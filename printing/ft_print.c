/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:19:26 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 13:26:40 by lilefebv         ###   ########lyon.fr   */
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
	while (start <= end)
	{
		ft_printchar_count(str[start], counter);
		start++;
	}
}

void	ft_print_param(t_param *param, va_list args, int *counter)
{
	if (param->type == 'c')
		ft_printchar_count(va_arg(args, int), counter);
	else if (param->type == 'i')
		ft_print_i(va_arg(args, int), counter);
}