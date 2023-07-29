/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:13:46 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/28 13:43:27 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //va's

# include "ft_flags_struct.h" //struct for syntax

/* ====================================||==================================== *\
||																			  ||
||								   ft_printf								  ||
||																			  ||																		  ||
\* ================libft===============||==============©Othello============== */
va_list	g_arg;

int			ft_printf(const char *str, ...);
int			ft_dprintf(int fd, const char *str, ...);
/* ====================================||==================================== *\
||							   ft_printf_utils.c							  ||
\* ==============ft_printf=============||==============©Othello============== */
char		*ftp_make_string(const char *str);
char		*ftp_merge_strings(char *old_str, char *add);
int			ftp_print_size(int add_size);
/* ====================================||==================================== *\
||						 ft_printf_utils_convert_arg.c						  ||
\* ==============ft_printf=============||==============©Othello============== */
char		*ftp_convert_arg(const char *str, int *i);
/* ====================================||==================================== *\
||						 ft_printf_utils_flag_struct.c						  ||
\* ==============ft_printf=============||==============©Othello============== */
void		ftp_make_flag_struct(const char *str, int *i, t_flags *flags);
/* ====================================||==================================== *\
||						ft_printf_utils_convert_string.c					  ||
\* ==============ft_printf=============||==============©Othello============== */
char		*ftp_convert_string(t_flags *flags, char *string);
/* ====================================||==================================== *\
||				  ft_printf_utils_convert_string_fieldwidth.c				  ||
\* ==============ft_printf=============||==============©Othello============== */
char		*ftp_modify_precision(t_flags *flags, char *string);
/* ====================================||==================================== *\
||				   ft_printf_utils_convert_string_precision.c															  ||
\* ==============ft_printf=============||==============©Othello============== */
char		*ftp_modify_field_width(t_flags *flags, char *string);

#endif