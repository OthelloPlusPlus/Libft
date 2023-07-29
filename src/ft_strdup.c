/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:51:19 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:47:05 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								String Duplicate							  ||
||																			  ||
||		Allocates memory the size of string *s and copies it into it.		  ||
||																			  ||
||		Returns a pointer to the allocated memory.							  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen, ft_calloc, ft_memcpy

char	*ft_strdup(const char *s)
{
	int		size;
	char	*strdup;

	size = ft_strlen(s);
	strdup = (char *)ft_calloc((size + 1), sizeof(char));
	if (strdup == NULL)
		return (NULL);
	ft_memcpy(strdup, s, size);
	return (strdup);
}
