/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:10 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/28 13:45:42 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Make String									  ||
||																			  ||
||		Moves through given string and adds characters to buffer to write.	  ||
||		Whenever '%' flag is found, calls functions to adjust.				  ||
||																			  ||
||		Returns string to write.											  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

#include "libft.h"

#include <stdarg.h> //va's
#include <stdlib.h> //free

static char	*ftp_basic_char_to_add(const char *string, int i);

char	*ftp_make_string(const char *str)
{
	char	*buffer;
	char	*add;
	int		i;
	int		j;

	i = 0;
	j = 0;
	buffer = (char *)ft_calloc(1, 1);
	while (buffer != NULL && str[i] != '\0')
	{
		add = NULL;
		if (str[i] != '%' && (str[i + 1] == '%' || str[i + 1] == '\0'))
			add = ftp_basic_char_to_add(&str[j], i - j + 1);
		if (str[i] == '%')
		{
			add = ftp_convert_arg(str, &i);
			j = i + 1;
		}
		if (add != NULL)
			buffer = ftp_merge_strings(buffer, add);
		i++;
	}
	return (buffer);
}

static char	*ftp_basic_char_to_add(const char *string, int i)
{
	char	*add;

	add = (char *)ft_calloc(sizeof(char), i + 1);
	if (add != NULL)
		ft_memcpy(add, string, i);
	ftp_print_size(i);
	return (add);
}

char	*ftp_merge_strings(char *old_str, char *add)
{
	char		*new_str;
	int			new_size;
	static int	old_size = 0;

	new_size = 0;
	if (add != NULL)
	{
		new_size = ftp_print_size(0);
		new_str = (char *)ft_calloc(sizeof(char), new_size + 1);
		if (new_str != NULL)
		{
			ft_memcpy(new_str, old_str, old_size);
			ft_memcpy(&new_str[old_size], add, new_size - old_size);
		}
	}
	else
		new_str = NULL;
	old_size = new_size;
	free(old_str);
	free(add);
	return (new_str);
}

int	ftp_print_size(int add_size)
{
	static int	i = 0;
	int			ret;

	if (add_size >= 0)
		i = i + add_size;
	ret = i;
	if (add_size < 0)
		i = 0;
	return (ret);
}
