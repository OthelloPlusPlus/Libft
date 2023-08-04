/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:55:02 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 18:46:45 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	ft_bzero(void *s, size_t n)

#include <stdlib.h>
// void	*malloc(size_t __size)
// NULL

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc;

	calloc = malloc(count * size);
	if (calloc == NULL)
		return (NULL);
	ft_bzero(calloc, count * size);
	return (calloc);
}
