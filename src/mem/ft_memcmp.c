/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:27:53 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 17:31:59 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*memptr1;
	unsigned char	*memptr2;
	size_t			i;

	if (n == 0)
		return (0);
	memptr1 = (unsigned char *)s1;
	memptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (memptr1[i] != memptr2[i])
			break ;
		i++;
	}
	return (memptr1[i] - memptr2[i]);
}
