/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:48:07 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 21:02:27 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t
// NULL

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (!((s[i] - 0x01) & 0x80))
		++i;
	while (s[i] != '\0')
		++i;
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
