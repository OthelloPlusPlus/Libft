/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/20 15:38:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 18:07:44 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
// void	free(void *)
// NULL
#include <stddef.h>
// size_t

void	ft_realloc(void **ptr, size_t size)
{
	void	*new;

	new = ft_calloc(sizeof(char), size + 1);
	if (new != NULL)
		ft_memcpy(new, *ptr, ft_lowest_num(ft_strlen(*ptr), size));
	free(*ptr);
	*ptr = new;
}
