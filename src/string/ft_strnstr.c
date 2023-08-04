/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:44:16 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:28:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *s)
// int		ft_strncmp(const char *s1, const char *s2, size_t n)

#include <stddef.h>
// size_t
// NULL

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	i;

	if (needle[0] == '\0')
		return ((char *)haystack);
	needle_size = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + needle_size <= len)
	{
		if (!ft_strncmp(&haystack[i], needle, needle_size))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
