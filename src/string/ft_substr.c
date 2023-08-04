/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:50:54 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 18:55:20 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *s)
// void		*ft_calloc(size_t count, size_t size)
// void		*ft_memcpy(void *dst, const void *src, size_t n)

#include <stddef.h>
// size_t
// NULL

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_memcpy(substr, &s[start], len);
	return (substr);
}
