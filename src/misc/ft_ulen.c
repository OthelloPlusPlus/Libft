/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ulen.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/02 21:14:00 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/02 21:14:01 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							Unsigned Integer length							  ||
||																			  ||
||		Converts integer into character string.								  ||
||																			  ||
||		Returns amount of characters in value.								  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

int	ft_ulen(unsigned long long value, int base)
{
	int	len;

	if (value == 0)
		return (1);
	len = 0;
	while (value != 0)
	{
		len++;
		value = value / base;
	}
	return (len);
}
