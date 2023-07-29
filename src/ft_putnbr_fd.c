/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:57:11 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 14:35:41 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						 Put number in File Descriptor						  ||
||																			  ||
||		Takes the interger and writes it as a string 						  ||
||			in the specified file location.									  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <unistd.h> // write
#include <stdlib.h> // free

#include "libft_src.h" // ft_itoa, ft_strlen

void	ft_putnbr_fd(int n, int fd)
{
	char	*string;

	string = ft_itoa(n);
	if (string != NULL)
		write(fd, string, ft_strlen(string));
	free(string);
}
