/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:51:19 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 18:54:54 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *s)
// void		*ft_calloc(size_t count, size_t size)
// void		*ft_memcpy(void *dst, const void *src, size_t n)

#include <stddef.h>
// NULL

char	*ft_strdup(const char *s)
{
	int		size;
	char	*strdup;

	size = ft_strlen(s);
	strdup = (char *)ft_calloc((size + 1), sizeof(char));
	if (strdup == NULL)
		return (NULL);
	ft_memcpy(strdup, s, size);
	return (strdup);
}
