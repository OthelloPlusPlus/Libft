/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:31:22 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 19:57:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// ssize_t	write(int __fd, const void *__buf, size_t __nbyte)

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
