/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:09 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 14:22:42 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_i(int n, int *counter)
{
	if (n == -2147483648)
		ft_printstr("-2147483648", 0, 11, counter);
	else if (n < 0)
	{
		n = -n;
		ft_printchar_count('-', counter);
	}
	if (n <= 9)
		ft_printchar_count("0123456789"[n], counter);
	else
	{
		ft_print_i(n / 10, counter);
		ft_printchar_count("0123456789"[n % 10], counter);
	}
}

void	ft_print_d(double n, int *counter)
{
	(void)n;
	(void)counter;
}

void	ft_print_u(unsigned int n, int *counter)
{
	if (n <= 9)
		ft_printchar_count("0123456789"[n], counter);
	else
	{
		ft_print_i(n / 10, counter);
		ft_printchar_count("0123456789"[n % 10], counter);
	}
}


void	ft_print_x_lc(int n, int *counter)
{
	if (n == -2147483648)
		ft_printstr("-80000000", 0, 9, counter);
	else if (n < 0)
	{
		n = -n;
		ft_printchar_count('-', counter);
	}
	if (n <= 15)
		ft_printchar_count("0123456789abcdef"[n], counter);
	else
	{
		ft_print_x_lc(n / 16, counter);
		ft_printchar_count("0123456789abcdef"[n % 16], counter);
	}
}

void	ft_print_x_uc(int n, int *counter)
{
	if (n == -2147483648)
		ft_printstr("-80000000", 0, 9, counter);
	else if (n < 0)
	{
		n = -n;
		ft_printchar_count('-', counter);
	}
	if (n <= 15)
		ft_printchar_count("0123456789ABCDEF"[n], counter);
	else
	{
		ft_print_x_uc(n / 16, counter);
		ft_printchar_count("0123456789ABCDEF"[n % 16], counter);
	}
}
