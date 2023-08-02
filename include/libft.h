/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:58:35 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/02 22:08:48 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
// # include "libft_src.h"
// # include "additionals.h"
// # include "ft_math.h"
// # include "linked_list.h"
// # include "ft_printf.h"
// # include "get_next_line.h"

// # include "colors.h"
// # include "os_version.h"
# include <stddef.h>
// size_t

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Checks whether the given character is an alphabetical character.
 * 
 * @param c int value of the character to be checked
 * @return True if the character is alphabetical, and False otherwise.
 */
int		ft_isalpha(int c);

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Checks whether the given character is a digit.
 * 
 * @param c int value of the character to be checked
 * @return True if the character is a digit, and False otherwise.
 */
int		ft_isdigit(int c);

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Checks whether the given character is an alphanumeric character.
 * 
 * @param c int value of the character to be checked
 * @return True if the character is alphanumeric, and False otherwise.
 */
int		ft_isalnum(int c);

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Checks whether the given character is an ascii character.
 * 
 * @param c int value of the character to be checked
 * @return True if the character is ascii, and False otherwise.
 */
int		ft_isascii(int c);

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Checks whether the given character is a printable character.
 * 
 * @param c int value of the character to be checked
 * @return True if the character is printable, and False otherwise.
 */
int		ft_isprint(int c);

/**
 * @name	Libft 
 * @author	Othello
 * @brief 
 * Counts the length of the passed string.
 * 
 * @param s	String to be counted.
 * @return Length of the string
 */
size_t	ft_strlen(const char *s);


#endif
