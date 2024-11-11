/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:27:57 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 12:03:23 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_valid_conversion(char c)
{
	size_t	i;
	
	i = 0;
	while ("cspdiuxX%\0"[i])
	{
		if ("cspdiuxX%"[i] == c)
			return (1);
	}
	return (0);
}

t_list	*create_param_list(const char *str)
{
	t_list	*list;
	t_list	*node;
	t_list	*temp;
	t_param *element;
	size_t	i;
	
	list = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_valid_conversion(str[i + 1]))
		{
			element = create_el(str, str[i], str[i + 1]);
			if (!element)
			{
				ft_lstclear(list, delete_el);
				return (NULL);
			}
			node = ft_lstnew(element);
			if (!node)
			{
				ft_lstclear(list, delete_el);
				return (NULL);
			}
			if (!list)
				list = node;
			else if (!temp)
			{
				list->next = node;
				temp = list->next;
			}
			else
			{
				temp->next = node;
				temp = temp->next;
			}
		}
		i++;
		
	}
	return (list);
}

size_t	conversions_amount(t_list *list)
{
	size_t	size;
	t_param *temp;

	size = 0;
	while (list != NULL)
	{
		temp = list->content;
		if (temp->type != '%')
			size++;
		list = list->next;
	}
	return (size);
}