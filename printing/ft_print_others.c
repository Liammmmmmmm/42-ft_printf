/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_others.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:40:19 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 13:45:09 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_p(void *p, int *counter)
{
	
}

void	ft_print_s(const char *str, int *counter)
{
	size_t	i;
	
	i = 0;
	while (str[i])
	{
		ft_printchar_count(str[i], counter);
		i++;
	}
}