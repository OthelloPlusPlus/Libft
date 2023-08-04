/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strprintf.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:13:20 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:34:09 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
// char	*ftp_make_string(const char *str)
// int	ftp_print_size(int add_size)
// char	*ftp_merge_strings(char *old_str, char *add)

#include <stdarg.h>
// va_list
// void	va_start(va_list ap, last);
// void	va_end(va_list ap);
#include <stddef.h>
// NULL

char	*ft_strprintf(const char *str, ...)
{
	extern va_list	g_arg;
	char			*string;

	va_start(g_arg, str);
	string = ftp_make_string(str);
	va_end(g_arg);
	ftp_print_size(-1);
	ftp_merge_strings(NULL, NULL);
	return (string);
}
