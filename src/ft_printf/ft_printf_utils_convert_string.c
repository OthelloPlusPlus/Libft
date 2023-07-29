/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_convert_string.c                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:28 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:04 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Convert String								  ||
||																			  ||
||		Converts given string according to given flags.						  ||
||																			  ||
||		Returns modified character string.									  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

#include "libft.h"

#include <stdarg.h> //va's
#include <stdlib.h> //free

static char	*modify_sign(t_flags *flags, char *string);
static char	*modify_alternate_form(t_flags *flags, char *string);

char	*ftp_convert_string(t_flags *flags, char *string)
{
	if (string != NULL && flags->sign >= 0 && ft_strchr("di", flags->conv))
		string = modify_sign(flags, string);
	if (string != NULL && flags->form == '#' && string[0] != '0')
		string = modify_alternate_form(flags, string);
	if (string != NULL && (flags->prec >= 0 || flags->conv == 'p'))
		string = ftp_modify_precision(flags, string);
	if (string != NULL)
		string = ftp_modify_field_width(flags, string);
	return (string);
}

static char	*modify_sign(t_flags *flags, char *string)
{
	char	*new_str;
	int		size;

	new_str = NULL;
	if (string[0] >= '0' && string[0] <= '9')
	{
		size = ft_strlen(string);
		new_str = (char *)ft_calloc(sizeof(char), size + 2);
		if (new_str != NULL)
		{
			new_str[0] = flags->sign;
			ft_memcpy(&new_str[1], string, size);
		}
		free(string);
	}
	else
		new_str = string;
	return (new_str);
}

static char	*modify_alternate_form(t_flags *flags, char *string)
{
	int		size;
	char	*new_str;

	if (ft_strchr("oxXaAeEfFgG", flags->conv) == NULL)
		return (string);
	size = ft_strlen(string);
	new_str = (char *)ft_calloc(sizeof(char), size + 3);
	if (new_str != NULL)
	{
		if (flags->conv == 'x')
			ft_memcpy(new_str, "0x", 2);
		else if (flags->conv == 'X')
			ft_memcpy(new_str, "0X", 2);
		ft_memcpy(&new_str[2], string, size);
	}
	free(string);
	return (new_str);
}
