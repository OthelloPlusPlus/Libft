/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:29:37 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:31:52 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_memcpy

#include <stddef.h>
// size_t

static void	st_memrcpy(unsigned char *d, const unsigned char *s, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	if (dst > src)
		ft_memcpy(dst, src, len);
	else
		st_memrcpy(dst, src, len);
	return (dst);
}

/**
 * @author	Othello
 * @brief 
 * Copies 'n' bytes of memory of memory block 'src' to memory block 'dst'.
 * Works in reverse order of ft_memcpy.
 * 
 * @param dst	Pointer to the destination memory block
 * @param src	Pointer to the source memory block
 * @param n		Number of bytes to copy
 */
static void	st_memrcpy(unsigned char *dst, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		++i;
	}
}
