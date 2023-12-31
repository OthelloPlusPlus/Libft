/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_ultimate.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/09/06 14:29:13 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||						 Integer to Alphabet - Ultimate						  ||
||																			  ||
||		Converts integer into character string.								  ||
||																			  ||
||		Returns character string.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h"
// int	ft_ilen(long long value, int base)
// void	*ft_calloc(size_t count, size_t size)

static int	check_valid_base(char *base_set);
static void	*i_calloc(int size, int count, int pn);

char	*ft_itoa_ultimate(long long value, char *base_set)
{
	char	*a;
	int		base;
	int		size;
	int		pn;

	base = check_valid_base(base_set);
	if (base < 2)
		return (NULL);
	size = ft_ilen(value, base);
	pn = 1;
	if (value < 0)
		pn = -1;
	a = (char *)i_calloc(sizeof(char), size + 1, pn);
	if (a == NULL)
		return (NULL);
	while (value != 0)
	{
		size--;
		a[size] = base_set[value % base * pn];
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

static void	*i_calloc(int size, int count, int pn)
{
	char	*a;

	a = (char *)ft_calloc(size, count);
	if (a == NULL)
		return (NULL);
	if (pn == 1)
		a[0] = '0';
	else if (pn == -1)
		a[0] = '-';
	return (a);
}
