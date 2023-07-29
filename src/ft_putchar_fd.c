/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:31:22 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 18:31:22 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						Put character in File Descriptor					  ||
||																			  ||
||		Takes the character and writes it in the specified file location.	  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <unistd.h> //write

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
