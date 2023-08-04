/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:47:34 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 19:49:41 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t ft_strlen(const char *s)
// void *ft_calloc(size_t count, size_t size)

#include <stddef.h>
// NULL

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*str;
	int		i;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	str = (char *)ft_calloc((length + 1), sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
