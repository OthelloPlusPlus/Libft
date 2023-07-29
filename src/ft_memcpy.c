/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:28:45 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 18:28:45 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								  Memory Copy								  ||
||																			  ||
||		Copies size_t n bytes from src to dest.								  ||
||		If areas might overlap, use memmove.								  ||
||																			  ||
||		Returns original value of dst.										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stddef.h> //size_t

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*memsrc;
	char	*memdest;

	if (dst == src || n == 0)
		return (dst);
	i = 0;
	memsrc = (char *)src;
	memdest = (char *)dst;
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dst);
}
