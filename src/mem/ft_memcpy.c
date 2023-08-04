/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:28:45 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 20:08:38 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*memsrc;
	unsigned char	*memdest;

	if (dst == src)
		return (dst);
	memsrc = (unsigned char *)src;
	memdest = (unsigned char *)dst;
	while (n > 0)
	{
		--n;
		memdest[n] = memsrc[n];
	}
	return (dst);
}
