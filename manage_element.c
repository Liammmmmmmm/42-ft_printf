/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:06:43 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 17:24:07 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_param	*create_el(const char *str, size_t start, size_t end)
{
	t_param	*res;

	res = malloc(sizeof(t_param));
	if (!res)
		return (NULL);
	res->start = start;
	res->end = end;
	res->type = str[end];
	return (res);
}

void	delete_el(void *pointer)
{
	free(pointer);
}
