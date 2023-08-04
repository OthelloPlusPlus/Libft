/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_ultimate.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:13:54 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:53:34 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||					 Usigned Integer to Alphabet - Ultimate					  ||
||																			  ||
||		Converts unsigned integer into character string.					  ||
||																			  ||
||		Returns character string.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h"
// int	ft_ulen(unsigned long long value, int base)
// void	*ft_calloc(size_t count, size_t size)

#include <stdint.h>
// uint64_t

static int	check_valid_base(char *numbers);
static void	*u_calloc(int size, int count);

char	*ft_utoa_ultimate(uint64_t value, char *numbers)
{
	char	*a;
	int		base;
	int		size;

	base = check_valid_base(numbers);
	if (base < 2)
		return (NULL);
	size = ft_ulen(value, base);
	a = (char *)u_calloc(sizeof(char), size + 1);
	if (a == NULL)
		return (NULL);
	a[0] = '0';
	while (value != 0)
	{
		size--;
		a[size] = numbers[value % base];
		value = value / base;
	}
	return (a);
}

static int	check_valid_base(char *numbers)
{
	int	base;
	int	i;

	if (numbers == NULL)
		return (0);
	base = 0;
	while (numbers[base] != '\0')
	{
		if (numbers[base] < ' ' || numbers[base] > '~')
			return (0);
		i = 0;
		while (i < base)
		{
			if (numbers[base] == numbers[i])
				return (0);
			i++;
		}
		base++;
	}
	return (base);
}

static void	*u_calloc(int size, int count)
{
	char	*a;

	a = ft_calloc(size, count);
	if (a == NULL)
		return (NULL);
	a[0] = '0';
	return (a);
}
