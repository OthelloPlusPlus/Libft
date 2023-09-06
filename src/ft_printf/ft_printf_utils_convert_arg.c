/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_convert_arg.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:40 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:50:13 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Convert Argument							  ||
||																			  ||
||		Converts given argument into character string.						  ||
||																			  ||
||		Returns character string.											  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

#include "libft.h"
// char		*ft_utoa_ultimate(unsigned long long value, char *numbers)
// void		*ft_calloc(size_t count, size_t size)
// size_t	ft_strlen(const char *s)
// void		*ft_memcpy(void *dst, const void *src, size_t n)
#include "ft_printf_utils.h"
// t_flags
// void	ftp_make_flag_struct(const char *str, int *i, t_flags *flags)
// char	*ftp_convert_string(t_flags *flags, char *string)
#include <stdarg.h>
// va_list
// type	va_arg(va_list ap, type);
#include <stdlib.h>
// void	free(void *)

static char	*ftp_call_argument(t_flags *flags);
static char	*alloc_c(int c);
static char	*alloc_s(char *string);

char	*ftp_convert_arg(const char *str, int *i)
{
	t_flags	flags;
	char	*string;

	*i = *i + 1;
	ftp_make_flag_struct(str, i, &flags);
	string = ftp_call_argument(&flags);
	if (string != NULL)
		string = ftp_convert_string(&flags, string);
	return (string);
}

static char	*ftp_call_argument(t_flags *flags)
{
	extern va_list	g_arg;
	char			*str;

	str = NULL;
	if (flags->conv == 'c')
		str = alloc_c(va_arg(g_arg, int));
	else if (flags->conv == '%')
		str = alloc_c('%');
	else if (flags->conv == 's')
		str = alloc_s(va_arg(g_arg, char *));
	else if (flags->conv == 'p')
		str = ft_utoa_ultimate(va_arg(g_arg, unsigned long), "0123456789abcdef");
	else if (flags->conv == 'd' || flags->conv == 'i')
		str = ft_itoa_ultimate(va_arg(g_arg, int), "0123456789");
	else if (flags->conv == 'u')
		str = ft_utoa_ultimate(va_arg(g_arg, unsigned int), "0123456789");
	else if (flags->conv == 'x')
		str = ft_utoa_ultimate(va_arg(g_arg, unsigned int), "0123456789abcdef");
	else if (flags->conv == 'X')
		str = ft_utoa_ultimate(va_arg(g_arg, unsigned int), "0123456789ABCDEF");
	return (str);
}

static char	*alloc_c(int c)
{
	char	*add;

	add = (char *)ft_calloc(sizeof(char), 2);
	if (add != NULL)
		add[0] = c;
	return (add);
}

static char	*alloc_s(char *string)
{
	char	*add;
	int		size;

	if (string == NULL)
		string = "(null)";
	size = ft_strlen(string);
	add = (char *)ft_calloc(sizeof(char), size + 1);
	if (add != NULL)
		ft_memcpy(add, string, size);
	return (add);
}
