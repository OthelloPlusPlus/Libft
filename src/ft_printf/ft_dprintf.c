/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dprintf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:13:20 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/07/29 21:28:23 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>
//	ssize_t	write(int fildes, const void *buf, size_t nbyte);
#include <stdarg.h>
//	void	va_start(va_list ap, last);
//	type	va_arg(va_list ap, type);
//	void	va_copy(va_list dest, va_list src);
//	void	va_end(va_list ap);
#include <stdlib.h>
//	void	free(void *ptr);

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

int	ft_dprintf(int fd, const char *str, ...)
{
	extern va_list	g_arg;
	int				ret;
	char			*string;

	va_start(g_arg, str);
	string = ftp_make_string(str);
	va_end(g_arg);
	if (string == NULL)
		return (-1);
	ret = ftp_print_size(-1);
	ftp_merge_strings(NULL, NULL);
	ret = write(fd, string, ret);
	free(string);
	return (ret);
}
