# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 16:12:44 by lilefebv          #+#    #+#              #
#    Updated: 2024/11/10 16:37:38 by lilefebv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

FLAGS      = -Wall -Wextra -Werror
CC         = cc
NAME       = libftprintf.a
LISTC      = ft_printf.c
LISTO      = $(LISTC:.c=.o)
HEADER     = ft_printf.h

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(LISTO)
	ar -rsc $@ $?

clean :
	rm -f $(LISTO) $(LISTOBONUS)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY: all clean fclean re