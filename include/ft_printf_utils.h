/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/04 19:16:25 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:40:47 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

# include <stdarg.h>
// va_list

/* ====================================||==================================== *\
||																			  ||
||						  ft_printf syntax conversions						  ||
||		   %[$][flags][width][.precision][length modifier]conversion		  ||
||																			  ||
||	s		$								???								  ||
||	flags	form	alternate form		 #	add an '0x' or '.'.				  ||
||			padding	zero padding		 0	fills field width with 0's		  ||
||			padding	left adjusted		 -	string is alligned left on width. ||
||			sign	signed conversion	' '	add single space where + could be.||
||			sign	signed conversion	 +	always mention postive with '+'.  ||
||	width			field width			[#]	defines width of variable string. ||
||	prec			precision			[.#]defines width of variable.		  ||
||	len_mod			length modifier		©©	adjust length of variable type.	  ||
||	conv			conversion			©	defines variable type.			  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

typedef struct s_flags
{
	int		s;
	int		form;
	int		padding;
	int		sign;
	int		width;
	int		prec;
	char	len_mod[2];
	int		conv;
}	t_flags;

va_list	g_arg;

/* ====================================||==================================== *\
||							   ft_printf_utils.c							  ||
\* ==============ft_printf=============||==============©Othello============== */
char	*ftp_make_string(const char *str);
char	*ftp_merge_strings(char *old_str, char *add);
int		ftp_print_size(int add_size);
/* ====================================||==================================== *\
||						 ft_printf_utils_convert_arg.c						  ||
\* ==============ft_printf=============||==============©Othello============== */
char	*ftp_convert_arg(const char *str, int *i);
/* ====================================||==================================== *\
||						 ft_printf_utils_flag_struct.c						  ||
\* ==============ft_printf=============||==============©Othello============== */
void	ftp_make_flag_struct(const char *str, int *i, t_flags *flags);
/* ====================================||==================================== *\
||						ft_printf_utils_convert_string.c					  ||
\* ==============ft_printf=============||==============©Othello============== */
char	*ftp_convert_string(t_flags *flags, char *string);
/* ====================================||==================================== *\
||				  ft_printf_utils_convert_string_fieldwidth.c				  ||
\* ==============ft_printf=============||==============©Othello============== */
char	*ftp_modify_precision(t_flags *flags, char *string);
/* ====================================||==================================== *\
||				   ft_printf_utils_convert_string_precision.c															  ||
\* ==============ft_printf=============||==============©Othello============== */
char	*ftp_modify_field_width(t_flags *flags, char *string);

#endif
