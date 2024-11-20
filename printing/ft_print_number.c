/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:09 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/20 17:36:41 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_i(int n, int *counter)
{
	if (n == -2147483648)
		return (ft_printstr("-2147483648", 0, 11, counter));
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
void	ft_print_base(unsigned int n, char *base, int *counter)
{
	size_t	baselen;

	baselen = ft_strlen(base);	
	if (n <= baselen - 1)
		ft_printchar_count(base[n], counter);
	else
	{
		ft_print_base(n / baselen, base, counter);
		ft_printchar_count(base[n % baselen], counter);
	}
}
