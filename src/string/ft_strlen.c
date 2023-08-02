/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:48:07 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/02 22:05:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								 String Length								  ||
||																			  ||
||		Counts the length of cons char *s.									  ||
||																			  ||
||		Returns the length, excluding the '\0'								  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stddef.h>
// size_t

size_t	ft_strlen(const char *s)
{
	const unsigned long	*ls;
	size_t				i;

	if (s == NULL)
		return (0);
	ls = (const unsigned long *)s;
	i = 0;
	while (ls[i] - 0x0101010101010101UL & 0x8080808080808080UL)
		i++;
	i *= sizeof(const unsigned long);
	while (s[i] != '\0')
		i++;
	return (i);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	if (s == NULL)
// 		return (0);
// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
