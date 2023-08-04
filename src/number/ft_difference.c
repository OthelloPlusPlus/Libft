/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_difference.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/13 17:37:47 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:56:06 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t

size_t	ft_difference(int i, int j)
{
	if (i > j)
		return (i - j);
	return (j - i);
}
