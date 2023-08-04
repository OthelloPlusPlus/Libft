/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:57:11 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:16:04 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char		*ft_itoa(int n)
// size_t	ft_strlen(const char *s)

#include <unistd.h>
// ssize_t	write(int __fd, const void *__buf, size_t __nbyte)
// NULL
#include <stdlib.h>
// void	free(void *)
// NULL

void	ft_putnbr_fd(int n, int fd)
{
	char	*string;

	string = ft_itoa(n);
	if (string != NULL)
		write(fd, string, ft_strlen(string));
	free(string);
}
