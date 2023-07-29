/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:49:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:48:32 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||					  String length Concatenate (combine).					  ||
||																			  ||
||		Copies n characters from src to the end of dst.						  ||
||		The maximum length is dstsize - strlen(dst) -1, 					  ||
||			putting a '\0' at the end.										  ||
||		if strlen(dst)  > dstsize or dstzie = 0, than no '\0'.				  ||
||		Areas must not overlap or behavior is undefined.					  ||
||																			  ||
||		Returns strlen(dst) + strlen(src)									  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	j = 0;
	if (dstsize > 0)
	{
		while (dst[i] != '\0')
			i++;
		while (i < dstsize - 1 && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (ret);
}
