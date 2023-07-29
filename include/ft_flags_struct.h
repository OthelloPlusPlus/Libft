/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_flags_struct.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:59 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/08 20:52:07 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLAGS_STRUCT_H
# define FT_FLAGS_STRUCT_H

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

#endif