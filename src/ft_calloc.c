/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:55:02 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:43:11 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						Contiguously Memory Allocation.						  ||
||																			  ||
||	Allocates memory for size_t count objects that are size_t size bytes long.||
||			Fills allocated memory with 0.									  ||
||																			  ||
||		Returns a pointer to the start of the allocated memory.				  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stdlib.h> // malloc

#include "libft_src.h" /// ft_bzero

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;

	calloc = (char *)malloc(count * size);
	if (calloc == NULL)
		return (NULL);
	ft_bzero(calloc, count * size);
	return (calloc);
}
