/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:52:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/03 17:21:53 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// ft_strlen

#include <stddef.h>
// NULL

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *)&s[ft_strlen(s)];
	c = (unsigned char)c;
	while (str > s && *str != c)
		--str;
	if (*str == c)
		return (str);
	return (NULL); 
}
