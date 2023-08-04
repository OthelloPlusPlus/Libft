/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lowest_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:43 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:54:47 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
// uint64_t

int64_t	ft_lowest_num(int64_t val1, int64_t val2)
{
	if (val1 < val2)
		return (val1);
	return (val2);
}
