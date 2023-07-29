/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils_flag_struct.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:19 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:08 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							  Make Flag Structure							  ||
||																			  ||
||		Fills flag structure with syntax values.							  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

#include "libft.h"

#include <stdarg.h> //va's
#include <stdlib.h> //free

static void	ftp_fill_flag_struct(const char *str, int *i, t_flags *flags);
static void	ftp_fill_struct_flags(const char *str, int *i, t_flags *flags);
static void	ftp_fill_struct_width_prec(const char *str, int *i, t_flags *flags);
static void	ftp_fill_struct_length_mod(const char *str, int *i, t_flags *flags);

void	ftp_make_flag_struct(const char *str, int *i, t_flags *flags)
{
	flags->s = -1;
	flags->form = -1;
	flags->padding = -1;
	flags->sign = -1;
	flags->width = -1;
	flags->prec = -1;
	ft_memset(flags->len_mod, 0, 2);
	flags->conv = 0;
	ftp_fill_flag_struct(str, i, flags);
}

static void	ftp_fill_flag_struct(const char *str, int *i, t_flags *flags)
{
	if (ft_strchr("#0- +", str[*i]))
		ftp_fill_struct_flags(str, i, flags);
	if ((str[*i] >= '0' && str[*i] <= '9') || str[*i] == '.')
		ftp_fill_struct_width_prec(str, i, flags);
	if (ft_strchr("hlqLjzZt", str[*i]))
		ftp_fill_struct_length_mod(str, i, flags);
	if (ft_strchr("diouxXeEfFgGaAcsCSpnm%%", str[*i]))
		flags->conv = str[*i];
}

static void	ftp_fill_struct_flags(const char *str, int *i, t_flags *flags)
{
	while (ft_strchr("#0- +", str[*i]))
	{
		if (str[*i] == '#')
			flags->form = '#';
		else if (str[*i] == '0' && flags->padding == -1)
			flags->padding = '0';
		else if (str[*i] == '-')
			flags->padding = '-';
		else if (str[*i] == ' ' && flags->sign == -1)
			flags->sign = ' ';
		else if (str[*i] == '+')
			flags->sign = '+';
		*i = *i + 1;
	}
}

static void	ftp_fill_struct_width_prec(const char *str, int *i, t_flags *flags)
{
	if (str[*i] >= '1' || str[*i] <= '9')
	{
		flags->width = ft_atoi(&str[*i]);
		while (str[*i] >= '0' && str[*i] <= '9')
		*i = *i + 1;
	}
	if (str[*i] == '.')
	{
		*i = *i + 1;
		flags->prec = ft_atoi(&str[*i]);
		while (str[*i] >= '0' && str[*i] <= '9')
			*i = *i + 1;
	}
}

static void	ftp_fill_struct_length_mod(const char *str, int *i, t_flags *flags)
{
	int	j;

	j = 0;
	while (ft_strchr("hlqLjzZt", str[*i]))
	{
		if (j < 2)
			flags->len_mod[j] = str[*i];
		*i = *i + 1;
	}
}
