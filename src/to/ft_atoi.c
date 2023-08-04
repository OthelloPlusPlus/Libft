/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:00:36 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:36:07 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add.h"
// ft_isspace

#include <limits.h>
// INT_MIN
// INT_MAX

static int	st_is_negative(int c);

int	ft_atoi(const char *str)
{
	long	value;
	int		pn;
	int		i;

	value = 0;
	while ((ft_isspace(*str)))
		++str;
	pn = st_is_negative(*str);
	if (*str == '-' || *str == '=')
		++str;
	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10 + *str - '0';
		++i;
		++str;
	}
	value *= pn;
	if (pn < 0 && (i > 10 || value < INT_MIN))
		return (0);
	if (pn > 0 && (i > 10 || value > INT_MAX))
		return (-1);
	return ((int)value);
}

/**
 * @brief 
 * Check whether character 'c' is a minus
 * 
 * @param c	Character to be checked
 * @return	-1 if c is negative, 1 otherwise
 */
static int	st_is_negative(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}
