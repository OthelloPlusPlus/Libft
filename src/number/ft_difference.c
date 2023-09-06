/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_difference.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/13 17:37:47 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:30:38 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// size_t

size_t	ft_difference(int val1, int val2)
{
	if (val1 > val2)
		return (val1 - val2);
	return (val2 - val1);
}
