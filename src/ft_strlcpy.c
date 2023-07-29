/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:48:40 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:48:48 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								String length Copy							  ||
||																			  ||
||		Copies dstsize -1 characters from src to dst,						  ||
||			adding a '\0' if dstsize is not 0.								  ||
||																			  ||
||		Returns length of src.												  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		if (i == dstsize)
			i--;
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
