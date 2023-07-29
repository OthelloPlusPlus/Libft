/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:26:57 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 18:26:57 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Memory Character							  ||
||																			  ||
||		Find the first occurrence of int c (as unsigned char) in string *s.	  ||
||																			  ||
||		Returns a pointer to found character, or 0 if not found.			  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stddef.h> //size_t

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*strptr;

	if (n == 0)
		return (NULL);
	i = 0;
	c = c % 256;
	strptr = (char *) s;
	while (i < n)
	{
		if (strptr[i] == c)
			return (&strptr[i]);
		i++;
	}
	return (0);
}
