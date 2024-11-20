# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 16:12:44 by lilefebv          #+#    #+#              #
#    Updated: 2024/11/20 17:57:15 by lilefebv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

FLAGS  = -Wall -Wextra -Werror
CC     = cc
NAME   = libftprintf.a
LISTC  = ft_printf.c printing/ft_print.c printing/ft_print_number.c printing/ft_print_others.c
LISTO  = $(LISTC:.c=.o)
HEADER = ft_printf.h

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(LISTO)
	ar -rsc $@ $?

clean :
	rm -f $(LISTO)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re