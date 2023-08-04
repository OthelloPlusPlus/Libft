/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:50:24 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:04:34 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t	ft_strlen(const char *s)
// void		*ft_calloc(size_t count, size_t size)
// void		*ft_memcpy(void *dst, const void *src, size_t n)

#include <stddef.h>
// NULL

enum	e_lenStrjoin
{
	S1,
	S2,
	SIZE
};

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		len[SIZE];

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len[S1] = ft_strlen(s1);
	len[S2] = ft_strlen(s2);
	strjoin = (char *)ft_calloc((len[S1] + len[S2] + 1), sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_memcpy(strjoin, s1, len[S1]);
	ft_memcpy(&strjoin[len[S1]], s2, len[S2]);
	return (strjoin);
}
