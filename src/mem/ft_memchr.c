/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:26:57 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 21:04:24 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t
// NULL

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*strptr;

	if (n == 0)
		return (NULL);
	strptr = (char *) s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (strptr[i] == c)
			return (&strptr[i]);
		i++;
	}
	return (NULL);
}
