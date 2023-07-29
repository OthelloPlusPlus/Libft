/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:09:08 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 18:09:09 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Is Printable								  ||
||																			  ||
||		Checks whether int c is a printable character from the ASCII table.	  ||
||																			  ||
||		Returns 1 if true, 0 if false.										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
