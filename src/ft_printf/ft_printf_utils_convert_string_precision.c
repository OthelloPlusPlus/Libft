/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_convert_string_precision.c         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:32 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:44:59 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h> //free

static char	*calloc_presicion_size(t_flags *flags, char *string);
static void	prepare_new_str(t_flags *flags, char *new_str, char *str, int size);
static void	cpy_string_to_new_str(t_flags *flags, char *str, char *new_str);

char	*ftp_modify_precision(t_flags *flags, char *string)
{
	char	*new_str;

	new_str = calloc_presicion_size(flags, string);
	if (new_str != NULL)
		cpy_string_to_new_str(flags, string, new_str);
	free(string);
	return (new_str);
}

static char	*calloc_presicion_size(t_flags *flags, char *string)
{
	char	*new_str;
	int		len;
	int		size;

	if (string[0] == '0' && flags->prec == 0)
		return (ft_calloc(sizeof(char), 1));
	len = ft_strlen(string);
	size = len;
	if (ft_strchr("diouxXp", flags->conv) != NULL && size <= flags->prec)
	{
		size = flags->prec;
		if (string[0] == '-')
			size++;
	}
	else if (flags->prec >= 0 && flags->prec < len && flags->conv == 's')
		size = flags->prec;
	if (flags->conv == 'p')
		size += 2;
	new_str = (char *)ft_calloc(sizeof(char), size + 1);
	if (new_str != NULL)
		prepare_new_str(flags, new_str, string, size);
	return (new_str);
}

static void	prepare_new_str(t_flags *flags, char *new_str, char *str, int size)
{
	if (flags->conv == 's')
		ft_memset(new_str, ' ', size);
	else
		ft_memset(new_str, '0', size);
	if (str[0] == '-' && ft_strchr("dio", flags->conv))
		new_str[0] = '-';
	if (flags->conv == 'p')
		ft_memcpy(new_str, "0x", 2);
}

static void	cpy_string_to_new_str(t_flags *flags, char *str, char *new_str)
{
	int	loc_str;
	int	len_newstr;
	int	len_str;

	loc_str = 0;
	if (ft_strchr("dio", flags->conv) && str[0] == '-')
		loc_str++;
	len_str = ft_strlen(&str[loc_str]);
	len_newstr = ft_strlen(new_str);
	if (len_newstr < len_str)
		len_str = len_newstr;
	ft_memcpy(&new_str[len_newstr - len_str], &str[loc_str], len_str);
}
