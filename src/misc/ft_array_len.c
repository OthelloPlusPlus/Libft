/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_array_len.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/13 17:37:09 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:06:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// NULL
#include <limits.h>
// INT_MAX

int	ft_array_len(void **array)
{
	int	len;

	if (array == NULL)
		return (0);
	len = 0;
	while (array[len] != NULL)
	{
		len++;
		if (len == INT_MAX)
			break ;
	}
	if (array[len] != NULL)
		return (-1);
	return (len);
}
