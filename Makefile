# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 16:12:44 by lilefebv          #+#    #+#              #
#    Updated: 2024/11/11 14:32:00 by lilefebv         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

FLAGS  = -Wall -Wextra -Werror
CC     = cc
NAME   = libftprintf.a
LISTC  = ft_printf.c manage_element.c manage_list.c printing/ft_print.c printing/ft_print_number.c printing/ft_print_others.c
LISTO  = $(LISTC:.c=.o)
LIBFTC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_calloc.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c libft/ft_itoa.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c libft/ft_tolower.c libft/ft_toupper.c libft/ft_lstnew_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstsize_bonus.c libft/ft_lstlast_bonus.c libft/ft_lstadd_back_bonus.c libft/ft_lstdelone_bonus.c libft/ft_lstclear_bonus.c libft/ft_lstiter_bonus.c libft/ft_lstmap_bonus.c
LIBFTO = $(LIBFTC:.c=.o)
HEADER = ft_printf.h

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -o $@ -c $<

all : $(NAME)

$(NAME) : $(LISTO) $(LIBFTO)
	ar -rsc $@ $?

clean :
	rm -f $(LISTO) $(LIBFTO)

fclean : clean
	rm -f libft.a

re : fclean all

.PHONY: all clean fclean re