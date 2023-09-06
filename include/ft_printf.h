/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:13:46 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:44:12 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ====================================||==================================== *\
||																			  ||
||								   ft_printf								  ||
||		Writes a string of characters, using given variable arguments.		  ||
||																			  ||
||		Returns written length.												  ||
||																			  ||
|| ====================================||==================================== ||
||																			  ||
||							   Conversion syntax:							  ||
||		   %[$][flags][width][.precision][length modifier]conversion		  ||
||																			  ||
||					[$]														  ||
||					[flags]				#0- +								  ||
||					[width]				[integer]							  ||
||					[.precision]		.[integer]							  ||
||					[length modifier]	hh, h, l, ll, q,					  ||
||										L, j, z, Z, t						  ||
||					[conversion]		d, i, o, u, x, X, e, E,				  ||
||										f, F, g, G, a, A, c,				  ||
||										s, C, S, p, n, m, %					  ||
||																			  ||
||			  https://man7.org/linux/man-pages/man3/printf.3.html			  ||
|| ====================================||==================================== ||
||																			  ||
||								   Mandatory:								  ||
||		   %											  conversion		  ||
||																			  ||
||						  Bonus 0-[width][.precision]:						  ||
||		   %   [flags][width][.precision]				  conversion		  ||
||																			  ||
||								   Bonus # +:								  ||
||		   %   [flags]									  conversion		  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

/**
 * @name	Print Function
 * @author	Othello
 * @brief 
 * Writes passed character string 'str' to the standard output.
 * 	Whenever flag '%' is found, inserts additional passed arguments.
 * 	Refer to printf documentation for expected behavior for each flag.
 * 
 * @param str	String to be printed
 * @param ... 	Ellipsis containing additional arguments
 * @return int	Amount of printed characters. -1 upon failure.
 */
int		ft_printf(const char *str, ...);

/**
 * @name	Directed Print Function
 * @author	Othello
 * @brief 
 * Writes passed character string 'str' to the passed File Descriptor 'fd'.
 * 	Whenever flag '%' is found, inserts additional passed arguments.
 * Refer to printf documentation for expected behavior for each flag.
 * 
 * @param fd	File Descriptor for the string to be printed in
 * @param str	String to be printed
 * @param ... 	Ellipsis containing additional arguments
 * @return int	Amount of printed characters. -1 upon failure.
 */
int		ft_dprintf(int fd, const char *str, ...);

/**
 * @name	String Print Function
 * @author	Othello
 * @brief 
 * Checks character string 'str' for '%' flags
 * 	and inserts additional passed arguments.
 * Returns the adjusted string as an allocated character array.
 * Refer to printf documentation for expected behavior for each flag.
 * 
 * @param str	String to be adjusted
 * @param ...	Ellipsis containing additional arguments
 * @return	Pointer to the adjusted character string
 */
char	*ft_strprintf(const char *str, ...);

#endif
