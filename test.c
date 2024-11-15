/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:36:15 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/15 16:49:46 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main()
{
	// ft_printf("Res : %i | Char : %c", 123456, 't');
	t_list *test = ft_lstnew(NULL);

	ft_printf("ME %%%% ");
	printf("OG %%%% ");

	// printf("OG1 %p %p \n", LONG_MIN, LONG_MAX);
	// ft_printf("ME1 %p %p \n", LONG_MIN, LONG_MAX);

	// printf("OG2 %p %p \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ME2 %p %p \n", ULONG_MAX, -ULONG_MAX);
	
	// ft_printf("\n----\n");
	
	// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf(" %p %p ", LONG_MIN, LONG_MAX);
	
	// ft_printf("\n----\n");
	
	// ft_printf(" %p %p ", INT_MIN, INT_MAX);
	// printf(" %p %p ", INT_MIN, INT_MAX);

	// ft_printf("\n----\n");
	
	// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	
	// ft_printf("\n----\n");
	
	// ft_printf(" %p %p ", 0, 0);
	// printf(" %p %p ", 0, 0);

	// ft_printf("\n----\n");
	
	// ft_printf(" c : %c \n s : %s \n p : %p \n d : %d \n i : %i \n u : %u \n x : %x \n X : %X \n % : %% \n", 't', "test", test, 123456, 123456, 4294967294, 123456, 123456);
	// ft_printf("\n--------------------------------------------\n");
	// printf(" c : %c \n s : %s \n p : %p \n d : %d \n i : %i \n u : %u \n x : %x \n X : %X \n % : %% \n", 't', "test", test, 123456, 123456, 4294967294, 123456, 123456);
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