/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_add.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/03 18:38:10 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:58:14 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ADD_H
# define LIBFT_ADD_H

# include <stddef.h>
// size_t
# include <stdint.h>
// uint64_t

/* ====================================||==================================== *\
||																			  ||
||								  Is Character								  ||
||																			  ||
||		dir:	ischar														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Is Space
 * @author	Othello
 * @brief 
 * Checks whether the given character is a space character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is space, and False otherwise.
 */
int		ft_isspace(int c);

/* ====================================||==================================== *\
||																			  ||
||									 Convert								  ||
||																			  ||
||		dir:	to															  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

char	*ft_utoa_ultimate(uint64_t value, char *numbers);
char	*ft_itoa_ultimate(long long value, char *numbers);
char	*ft_utoclock(size_t sec);

/* ====================================||==================================== *\
||																			  ||
||							   Memory Allocation							  ||
||																			  ||
||		dir:	alloc														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

void	ft_realloc(void **ptr, size_t size);
void	*ft_calloc_exit(size_t count, size_t size);

/**
 * @name	Free
 * @author	Othello
 * @brief 
 * Frees the passed parameter and sets its pointer to NULL
 * 
 * @param syntax	ft_free((void *)&ptr);
 * 
 * @param ptr	Pointer to the memory to be freed
 */
void	ft_free(void **ptr);

/**
 * @name	Free Array
 * @author	Othello
 * @brief 
 * Frees every node of the passed array, then frees the array
 * and sets all pointers to NULL.
 * 
 * @param syntax	ft_free((void ***)&ptr);
 * 
 * @param array	Pointer to the address of the array
 */
void	ft_free_array(void ***array);

/* ====================================||==================================== *\
||																			  ||
||									Numbers									  ||
||																			  ||
||		dir:	number														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

int64_t	ft_lowest_num(int64_t val1, int64_t val2);
int64_t	ft_highest_num(int64_t val1, int64_t val2);
int		ft_reduct_counter(int counter);
int		ft_random(int seed);
size_t	ft_difference(int i, int j);
float	ft_sqrt(float radicand);

/* ====================================||==================================== *\
||																			  ||
||								 Miscellaneous								  ||
||																			  ||
||		dir:	misc														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Integer Length
 * @author	Othello
 * @brief 
 * Counts the amount of characters required for integer 'value',
 * adjusting for base 'base'
 * 
 * @param value	Integer to be counted
 * @param base	The base in which the integer is in
 * @return		Length of the integer
 */
int		ft_ilen(int64_t value, int base);
int		ft_ulen(unsigned long long value, int base);
int		ft_array_len(void **array);

void	ft_exit_msg(int value, char *msg);
void	ft_check_project(char *project);

#endif