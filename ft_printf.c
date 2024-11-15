/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:37:16 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 17:23:56 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_all(const char *str, int *cnt, t_list *conv, va_list args)
{
	size_t	pos;
	t_param	*temp_param;

	pos = 0;
	while (conv)
	{
		temp_param = conv->content;
		ft_printstr(str, pos, temp_param->start, cnt);
		ft_print_param(temp_param, args, cnt);
		conv = conv->next;
		pos = temp_param->end + 1;
	}
	ft_printstr(str, pos, ft_strlen(str), cnt);
}

int	ft_printf(const char *str, ...)
{
	t_list	*conversions;
	va_list	args;
	int		char_counter;

	char_counter = 0;
	conversions = create_param_list(str);
	va_start(args, str);
	ft_print_all(str, &char_counter, conversions, args);
	va_end(args);
	ft_lstclear(&conversions, delete_el);
	return (char_counter);
}
