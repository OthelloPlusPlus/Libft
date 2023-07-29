/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:48:07 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/10/19 19:31:06 by ohengelm      ########   odam.nl         */
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

#include <stddef.h> //size_t

size_t	ft_strlen(const char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return ((size_t)i);
}
