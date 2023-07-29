/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:03:50 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:41:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Is Alphanumerical							  ||
||																			  ||
||		Checks whether int c is an alphabet or digit character.				  ||
||																			  ||
||		Returns 1 if true, 0 if false.										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_isdigit, ft_isalpha

int	ft_isalnum(int c)
{
	if (ft_isdigit(c))
		return (1);
	if (ft_isalpha(c))
		return (1);
	return (0);
}
