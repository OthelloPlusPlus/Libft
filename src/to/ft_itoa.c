/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:10:38 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:42:55 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	*ft_calloc(size_t count, size_t size)
// int	ft_ilen(long long value, int base)

#include <stddef.h>
// NULL

static int	st_set_positive_negative(char *value, int n);
static void	st_convert_to_a(char *value, int n, int pn, int i);

char	*ft_itoa(int n)
{
	char	*value;
	int		pn;
	int		length;

	length = ft_ilen(n, 10);
	value = (char *)ft_calloc((length + 1), sizeof(char));
	if (value == NULL)
		return (NULL);
	pn = st_set_positive_negative(value, n);
	st_convert_to_a(value, n, pn, length);
	return (value);
}

/**
 * @brief 
 * checks if int 'n' is positive or negative.
 * Sets first char of string 'value' accordingly.
 * Returns 1 or -1 accordingly
 * 
 * @param value	String to contain the converted integer
 * @param n		Integer value to be checked
 * @return		-1 if n is negative, 1 otheriwise
 */
static int	st_set_positive_negative(char *value, int n)
{
	if (n < 0)
	{
		value[0] = '-';
		return (-1);
	}
	value[0] = '0';
	return (1);
}

/**
 * @brief 
 * Converts int 'n' to characters and places them into string 'value'.
 * 
 * @param value	String to contain the converted integer
 * @param n		Integer value to be converted
 * @param pn	Marker whether n is positive or negative
 * @param i		Index of the right most position of 'value'
 * 				for characters to be place in
 */
static void	st_convert_to_a(char *value, int n, int pn, int i)
{
	while (n != 0)
	{
		i--;
		value[i] = n % 10 * pn + '0';
		n /= 10;
	}
}
