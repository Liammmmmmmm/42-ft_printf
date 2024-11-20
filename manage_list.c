/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:27:57 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/20 15:48:41 by lilefebv         ###   ########lyon.fr   */
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
		i++;
	}
	return (0);
}

t_list	*clear_return(t_list **list)
{
	ft_lstclear(list, delete_el);
	return (NULL);
}

t_list	*create_parm(t_param *element, t_list **list, t_list **temp)
{
	t_list	*node;

	if (!element)
		return (clear_return(list));
	node = ft_lstnew(element);
	if (!node)
	{
		free(element);
		return (clear_return(list));
	}
	if (!*list)
		*list = node;
	else if (!*temp)
	{
		(*list)->next = node;
		*temp = (*list)->next;
	}
	else
	{
		(*temp)->next = node;
		*temp = (*temp)->next;
	}
	return (*list);
}

t_list	*create_param_list(const char *str)
{
	t_list	*list;
	t_list	*temp;
	size_t	i;

	list = NULL;
	temp = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && is_valid_conversion(str[i + 1]))
		{
			if (!create_parm(create_el(str, i, i + 1), &list, &temp))
				return (NULL);
			i++;
		}
		i++;
	}
	return (list);
}
