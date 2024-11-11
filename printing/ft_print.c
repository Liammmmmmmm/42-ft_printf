/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:19:26 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 12:41:30 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar_count(char c, int *counter)
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