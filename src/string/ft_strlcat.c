/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:49:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:05:03 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_strlen

#include <stddef.h>
// size_t

enum	e_indexStrlcat
{
	DST,
	SRC,
	SIZE
};

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i[SIZE];
	size_t	ret;

	i[DST] = ft_strlen(dst);
	i[SRC] = ft_strlen(src);
	if (dstsize == 0 || i[DST] > dstsize)
		return (dstsize + i[SRC]);
	ret = i[DST] + i[SRC];
	if (dstsize > 0)
	{
		i[SRC] = 0;
		while (i[DST] < dstsize - 1 && src[i[SRC]] != '\0')
		{
			dst[i[DST]] = src[i[SRC]];
			++i[DST];
			++i[SRC];
		}
		dst[i[DST]] = '\0';
	}
	return (ret);
}
