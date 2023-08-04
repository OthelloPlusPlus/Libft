/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ilen.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:51 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:55:17 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
// uint64_t

int	ft_ilen(int64_t value, int base)
{
	int	len;

	len = 0;
	if (value <= 0)
		len++;
	while (value != 0)
	{
		len++;
		value = value / base;
	}
	return (len);
}
