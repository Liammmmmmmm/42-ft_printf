/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:36:15 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/11 14:14:35 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_printf.h"

int main()
{
	// ft_printf("Res : %i | Char : %c", 123456, 't');
	t_list *test = ft_lstnew(NULL);
	
	ft_printf(" c : %c \n s : %s \n p : %p \n d : %d \n i : %i \n u : %u \n x : %x \n X : %X \n % : %% \n", 't', "test", test, 10.54, 123456, 4294967294, 123456, 123456);
	
	// printf("Ceci est un test 1 %% 2 %%% 3 %%%% 4 %%%%s 5 % 6 %h\n", "next");
	// printf("% \n");
	// printf("%d\n");
	// printf("%h\n");
	// printf("%&\n");
	// printf("%[\n");
	// printf("%	\n");
	// printf("%v\n");
	// printf("%\n");
	
}