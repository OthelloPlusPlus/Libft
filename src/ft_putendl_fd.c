/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:32:09 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:42:58 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						 Put string in File Descriptor						  ||
||																			  ||
||		Takes the string and writes it in the specified file location		  ||
||			with a new line at the end.										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <unistd.h> //write

#include "libft_src.h" //ft_putstr_fd

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
