/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:51:49 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:32:58 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	*ft_calloc(size_t count, size_t size)
// char	*ft_strchr(const char *s, int c)
// void	*ft_memcpy(void *dst, const void *src, size_t n)

#include <stdlib.h>
// NULL

static void	ft_move_counter(char const *s1, char const *set, int *l, int *r);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		left;
	int		right;
	char	*strtrim;

	if (s1 == NULL)
		return (NULL);
	left = 0;
	right = 0;
	ft_move_counter(s1, set, &left, &right);
	strtrim = (char *)ft_calloc((right - left + 2), sizeof(char));
	if (strtrim == NULL)
		return (NULL);
	if (right <= 0)
		return (strtrim);
	ft_memcpy(strtrim, &s1[left], right - left + 1);
	return (strtrim);
}

/**
 * @brief 
 * Move the counters 'l' and 'r' though string 's1'
 * to the first characters that are not part of 'set'
 * from their respective sides.
 * 
 * @param s1	String to be trimmed
 * @param set	Set of characters to be trimmed from the edges
 * @param l		Counter for the left side of s1
 * @param r		Counter for the right side of s1
 */
static void	ft_move_counter(char const *s1, char const *set, int *l, int *r)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!(ft_strchr(set, s1[i])))
		{
			*r = i;
			if (*l == 0 && ft_strchr(set, s1[0]) != 0)
				*l = i;
		}
		i++;
	}
}
