/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc_exit.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/10 20:17:32 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:02:43 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	ft_bzero(void *s, size_t n)

#include <stdlib.h>
// size_t
// void	*malloc(size_t __size)
// void	exit(int)
#include <unistd.h>
// size_t
// ssize_t	write(int __fd, const void *__buf, size_t __nbyte)
#include <errno.h>
// errno

void	*ft_calloc_exit(size_t count, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = NULL;
	while (ptr == NULL && i < 23)
	{
		ptr = malloc(count * size);
		i++;
	}
	if (ptr == NULL)
	{
		write(2, "Error: Malloc failure\n", 22);
		exit(errno);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
