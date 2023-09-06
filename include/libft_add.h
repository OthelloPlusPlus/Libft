/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft_add.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/03 18:38:10 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:31:45 by ohengelm      ########   odam.nl         */
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

/**
 * @name	Unsigned Integer to Alpha Ultimate
 * @author	Othello
 * @brief 
 * Takes unsigned long long integer 'value'
 * 	and converts it to the base character set 'base_set'.
 * Returns NULL if Base less than 2 characters or contains duplicate characters.
 * 
 * @param value		The value to be converted
 * @param base_set 	String of numbers to be used as a base.
 * @return	Pointer to the converted character string
 */
char	*ft_utoa_ultimate(uint64_t value, char *base_set);

/**
 * @name	Integer to Alpha Ultimate
 * @author	Othello
 * @brief 
 * Takes long long integer 'value'
 * 	and converts it to the base character set 'base_set'.
 * Returns NULL if Base less than 2 characters or contains duplicate characters.
 * 
 * @param value		The value to be converted
 * @param base_set 	String of numbers to be used as a base.
 * @return	Pointer to the converted character string
 */
char	*ft_itoa_ultimate(long long value, char *base_set);

/**
 * @name	Unsigned integer to Clock
 * @author	Othello
 * @brief 
 * Takes time in seconds and converts it to its clock values.
 * Returns it as an allocated character string.
 * For example, 123 seconds converts to 2:03.
 * 
 * @param sec	Time in seconds
 * @return	A pointer the character string
 */
char	*ft_utoclock(size_t sec);

/* ====================================||==================================== *\
||																			  ||
||							   Memory Allocation							  ||
||																			  ||
||		dir:	alloc														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Reallocate
 * @author	Othello
 * @brief 
 * Allocates a new memory block for 'ptr' with a new size of 'size' bytes,
 * 	adding a trailing 0 to the end.
 * Copies 'size' bytes from ptr to the new address.
 * Sets the new pointer in place of the old address pointer.
 * 
 * @param ptr	Pointer to the address of the allocted memory.
 * @param size	Size of the memory block.
 */
void	ft_realloc(void **ptr, size_t size);

/**
 * @name	Calloc or Exit
 * @author	Othello
 * @brief 
 * Allocates 'size' bytes of memory.
 * Upon succes, sets its content to 0 and returns it.
 * Upon failure, makes several additional attempts,
 * 	exiting the process upon repeated failure.
 * 
 * @param count	Amount of objects memory is to be allocated for
 * @param size	Size of each object
 * @return		Pointer to the allocated memory
 */
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

/**
 * @name	Lowest Number
 * @author	Othello
 * @brief 
 * Returns the lowest of the passed integer value.
 * 
 * @param val1	Integer value to be compared
 * @param val2	Integer value to be compared
 * @return	Lowest passed value
 */
int64_t	ft_lowest_num(int64_t val1, int64_t val2);

/**
 * @name	Highest Number
 * @author	Othello
 * @brief 
 * Returns the highest of the passed integer value.
 * 
 * @param val1	Integer value to be compared
 * @param val2	Integer value to be compared
 * @return	Highest passed value
 */
int64_t	ft_highest_num(int64_t val1, int64_t val2);

/**
 * @name	Reduct Counter
 * @author	Othello
 * @brief 
 * Reducts the value of the counter to be close to 0.
 * Reduces it by 1 for positive values.
 * Increases it by 1 for negative values.
 * 
 * @param counter	Current integer value of the counter
 * @return Next counter value
 */
int		ft_reduct_counter(int counter);

/**
 * @name	Random
 * @author	Othello
 * @brief 
 * Generates a random number.
 * 
 * @param seed	Interger value to seed the random number with.
 * @return	Random integer value
 */
int		ft_random(int seed);

/**
 * @name	Difference
 * @author	Othello
 * @brief 
 * Calculates the difference between the two passed values.
 * 
 * @param val1	Integer value to be compared
 * @param val2 Interge value to be compared
 * @return	Difference between the passed values
 */
size_t	ft_difference(int val1, int val2);

/**
 * @name	Square Root
 * @author	Othello
 * @brief 
 * Caluclates the square root of the passed value.
 * 
 * @param radicand	Float value of which the root has to be taken.
 * @return	The root value. 
 */
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

/**
 * @name	Unsigned Integer Length
 * @author	Othello
 * @brief 
 * Counts the amount of characters required for unsigned integer 'value',
 * adjusting for base 'base'
 * 
 * @param value	Unsigned Integer to be counted
 * @param base	The base in which the integer is in
 * @return int 
 */
int		ft_ulen(unsigned long long value, int base);

/**
 * @name	Array Length
 * @author	Othello
 * @brief 
 * Counts the amount of elements in the passed array
 * 	until a NULL terminator is found.
 * 
 * @param array	Address of the array
 * @return Amount of elements
 */
int		ft_array_len(void **array);

/**
 * @name	Exit with Message
 * @author	Othello
 * @brief 
 * Prints passed message 'msg' to the standard error.
 * Exits the process with the passed 'value'.
 * 
 * @param value	Value to exit the process with
 * @param msg	Message to be printed
 */
void	ft_exit_msg(int value, char *msg);

/**
 * @name	Check Project
 * @author	Othello
 * @brief 
 * Sets the process to be checked for leaks upon exiting using atexit().
 * Uses 'project' as name to identify the process.
 * 
 * @param project	Name of the process
 */
void	ft_check_project(char *project);

#endif
