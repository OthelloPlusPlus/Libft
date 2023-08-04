/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:59:06 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:16:31 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *s)

#include <unistd.h>
// ssize_t	write(int __fd, const void *__buf, size_t __nbyte)
// NULL

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
