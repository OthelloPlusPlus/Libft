/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:30:34 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 15:17:07 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t

void	*ft_memset(void *b, int c, size_t len)
{
	char	*mem;

	mem = b;
	while (len > 0)
	{
		--len;
		mem[len] = c;
	}
	return (b);
}
