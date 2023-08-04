/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:51:56 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 17:21:36 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// NULL

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	c = (unsigned char)c;
	while (*str != '\0' && *str != c)
		++str;
	if (*str == c)
		return (str);
	return (NULL);
}
