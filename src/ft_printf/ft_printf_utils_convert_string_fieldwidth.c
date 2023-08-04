/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_convert_string_fieldwidth.c        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:36 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:35:14 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t		ft_strlen(const char *s)
// long long	ft_highest_num(long long val1, long long val2)
// void			*ft_calloc(size_t count, size_t size)
// void			*ft_memset(void *b, int c, size_t len)
#include "ft_printf_utils.h"
// t_flags
// int	ftp_print_size(int add_size)

#include <stdlib.h>
// void	free(void *)

static void	prepare_newstr(t_flags *flags, char *new_str, int size);
static void	copy_into_field_width(t_flags *flags, char *new_str, char *str);

char	*ftp_modify_field_width(t_flags *flags, char *string)
{
	char	*new_str;
	int		len;
	int		size;

	len = ft_strlen(string);
	if (flags->conv == 'c')
		len = 1;
	size = ft_highest_num(len, flags->width);
	new_str = (char *)ft_calloc(sizeof(char), size + 1);
	if (new_str != NULL)
	{
		prepare_newstr(flags, new_str, size);
		copy_into_field_width(flags, new_str, string);
	}
	ftp_print_size(size);
	free(string);
	return (new_str);
}

static void	prepare_newstr(t_flags *flags, char *new_str, int size)
{
	if (flags->padding == '0')
		ft_memset(new_str, '0', size);
	else
		ft_memset(new_str, ' ', size);
}

static void	copy_into_field_width(t_flags *flags, char *new_str, char *str)
{
	int	len_str;
	int	len_newstr;

	len_str = ft_strlen(str);
	if (flags->conv == 'c')
		len_str = ft_highest_num(len_str, 1);
	len_newstr = ft_strlen(new_str);
	if (flags->padding == '-')
		ft_memcpy(new_str, str, len_str);
	else
		ft_memcpy(&new_str[len_newstr - len_str], str, len_str);
}
