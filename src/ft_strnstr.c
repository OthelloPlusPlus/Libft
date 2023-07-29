/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:44:16 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:49:53 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								String in String							  ||
||																			  ||
||		Finds the first full occurence of string *needle in *haystack,		  ||
||			before size_t len is reached.									  ||
||																			  ||
||		Returns a pointer to the start of first occurence.					  ||
||		If needle is empty, haystack is returned.							  ||
||		If needle is not found '\0' is returned.							  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (needle[0] == 0)
		return ((char *)&haystack[0]);
	if (len == 0)
		return (NULL);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] != '\0' && i <= len - needle_len)
	{
		j = 0;
		while (haystack [i + j] == needle[j])
		{
			j++;
			if (j > len)
				return (NULL);
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
