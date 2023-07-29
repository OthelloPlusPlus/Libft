/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:50:54 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:52:06 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								   Sub String								  ||
||																			  ||
||		Copies a part of string s, starting at character start for			  ||
||			a length of len characters.										  ||
||		Places this copy in allocated memory.								  ||
||																			  ||
||		Returns the new sub string.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen, ft_memcpy

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	substr = (char *)ft_calloc((len + 1), sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_memcpy(substr, &s[start], len);
	return (substr);
}
