/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:29:37 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:54:28 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								  Memory Move								  ||
||																			  ||
||		Copies size_t len characters from src to dst.						  ||
||		src and dst can overlap, in which case it must still be handled.	  ||
||																			  ||
||																			  ||
||		Returns original adres of dst.										  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //my functions

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str_src;
	char	*str_dst;

	if (dst == src)
		return (0);
	str_src = (char *)src;
	str_dst = (char *)dst;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i-- > 0)
			str_dst[i] = str_src[i];
	}
	return (dst);
}
