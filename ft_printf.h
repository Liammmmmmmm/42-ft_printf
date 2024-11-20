/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilefebv <lilefebv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:34:27 by lilefebv          #+#    #+#             */
/*   Updated: 2024/11/20 16:14:30 by lilefebv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

/**
 * Struct to stock a parameter for a conversions
 * 
 * @param type One of the possibles conversions (cspdiuxX%).
 * @param start The index of the % in the string.
 * @param end The index of the last character of the conversion, the index of
 *            cspdiuxX%.
 */
typedef struct s_param
{
	char	type;	/** One of the possibles conversions (cspdiuxX%). */
	size_t	start;	/** The index of the % in the string. */
	size_t	end;	/** The index of the last character */
}			t_param;

/**
 * @brief Structure representing an element of a linked list.
 *
 * The `t_list` structure is used to represent an element in a generic 
 * linked list. Each element contains a pointer to data of type `void*` 
 * and a pointer to the next element in the list.
 *
 * @param content A pointer to the content of the list element. The type
 *                of the content is generic (`void*`), allowing storage 
 *                of any type of data.
 * @param next A pointer to the next element in the list. If the current 
 *             element is the last one, this pointer is `NULL`.
 */
typedef struct s_list
{
	void			*content;	/** List content. */
	struct s_list	*next;		/** Pointer to the next element. */
}					t_list;

/**
 * @brief A custom implementation of printf function.
 * 
 * This function provides a simplified version of the standard printf function,
 * handling a subset of format specifiers. It supports printing characters, 
 * strings, pointers, integers, unsigned integers, and hexadecimal numbers 
 * in both lowercase and uppercase formats.
 *
 * It does not implement internal buffer management like the original printf 
 * function and only handles the following format specifiers:
 * 
 *  - `%c`: Prints a single character.
 * 
 *  - `%s`: Prints a string (null-terminated).
 * 
 *  - `%p`: Prints a pointer in hexadecimal format.
 * 
 *  - `%d`: Prints a signed decimal (base 10) number.
 * 
 *  - `%i`: Prints a signed integer (base 10) number (same as `%d`).
 * 
 *  - `%u`: Prints an unsigned decimal (base 10) number.
 * 
 *  - `%x`: Prints a number in hexadecimal (base 16) lowercase format.
 * 
 *  - `%X`: Prints a number in hexadecimal (base 16) uppercase format.
 * 
 *  - `%%`: Prints a literal percent sign.
 *
 * @param format A string that specifies the format of the output. It can
 *               contain text and format specifiers (preceded by '%') to 
 *               format the output accordingly.
 * 
 * @return - The total number of characters printed, excluding the terminating
 *         null byte.
 *   
 *         - If an invalid format specifier is encountered, behavior is
 *         undefined, but no characters will be printed for that specifier.
 */
int		ft_printf(const char *str, ...);

t_param	*create_el(const char *str, size_t start, size_t end);
void	delete_el(void *pointer);
t_list	*create_param_list(const char *str);
void	ft_printchar_count(int c, int *counter);
void	ft_printstr(const char *str, size_t start, size_t end, int *counter);
void	ft_print_param(t_param *param, va_list args, int *counter);
void	ft_print_s(const char *str, int *counter);
void	ft_print_p(void *p, int *counter);
void	ft_print_i(int n, int *counter);
void	ft_print_u(unsigned int n, int *counter);
void	ft_print_x_lc(unsigned int n, int *counter);
void	ft_print_x_uc(unsigned int n, int *counter);

/**
 * @brief Creates a new list element.
 * 
 * This function allocates memory for a new list element, sets the `content`
 * member to the provided value, and initializes the `next` pointer to NULL.
 * 
 * @param content The content to initialize the new list element with.
 * 
 * @return A pointer to the newly created list element. NULL if memory
 *         allocation fails.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Clears the entire list by freeing all elements.
 *
 * Deletes and frees the memory of the element passed in parameter, and all
 * the elements that follow, to using `del` and free(3). Finally, the initial
 * pointer must be set to NULL
 * 
 * @param lst A pointer to the pointer to the first element in the list.
 * @param del A function pointer that deletes the content of each element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Calculates the length of a string.
 *
 * The ft_strlen() function calculates the length of the string pointed to by
 * s, excluding the terminating null byte ('\0').
 *
 * @param str A pointer to the string whose length is to be calculated.
 * 
 * @return The number of bytes in the string pointed to by str.
 */
size_t	ft_strlen(const char *str);

#endif