/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:10:38 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:42:03 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							Integer to Ascii String							  ||
||																			  ||
||		Takes integer n and converts it to a character string.				  ||
||		Puts string in allocated memory										  ||
||																			  ||
||		Returns pointer to string.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_calloc
#include "additionals.h" //ft_ilen

char	*ft_itoa(int n)
{
	char	*value;
	int		i;
	int		pn;
	int		length;

	length = ft_ilen(n, 10);
	value = (char *)ft_calloc((length + 1), sizeof(char));
	if (value == NULL)
		return (NULL);
	value[0] = '0';
	pn = 1;
	if (n < 0)
	{
		value[0] = '-';
		pn = -1;
	}
	i = length;
	while (n != 0)
	{
		i--;
		value[i] = n % 10 * pn + '0';
		n = n / 10;
	}
	return (value);
}
