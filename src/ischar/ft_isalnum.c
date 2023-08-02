/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:03:50 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/02 20:35:47 by ohengelm      ########   odam.nl         */
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

#include "libft.h" 
// int		ft_isalpha(int c);
// int		ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
