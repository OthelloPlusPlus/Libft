/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:59:06 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:45:47 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						 Put string in File Descriptor						  ||
||																			  ||
||		Takes the string and writes it in the specified file location.		  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <unistd.h> // write

#include "libft_src.h" // ft_strlen

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write (fd, s, ft_strlen(s));
}
