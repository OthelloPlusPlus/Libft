/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa_ultimate.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:13:54 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:28:56 by ohengelm      ########   odam.nl         */
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

static int	check_valid_base(char *base_set);
static void	*u_calloc(int size, int count);

char	*ft_utoa_ultimate(uint64_t value, char *base_set)
{
	char	*a;
	int		base;
	int		size;

	base = check_valid_base(base_set);
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
		a[size] = base_set[value % base];
		value = value / base;
	}
	return (a);
}

static int	check_valid_base(char *base_set)
{
	int	base;
	int	i;

	if (base_set == NULL)
		return (0);
	base = 0;
	while (base_set[base] != '\0')
	{
		if (base_set[base] < ' ' || base_set[base] > '~')
			return (0);
		i = 0;
		while (i < base)
		{
			if (base_set[base] == base_set[i])
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
