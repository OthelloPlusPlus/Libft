/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:13:46 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:35:06 by ohengelm      ########   odam.nl         */
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

int		ft_printf(const char *str, ...);

int		ft_dprintf(int fd, const char *str, ...);

char	*ft_strprintf(const char *str, ...);

#endif
