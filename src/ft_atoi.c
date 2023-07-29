/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:00:36 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:26 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								Ascii to Integer							  ||
||																			  ||
||		Converts the represented value of the intial portion of the 		  ||
||			string *str	to its associated integer value.					  ||
||																			  ||
||		Returns the integer value.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" // ft_isspace

static int	is_negative(int c);

int	ft_atoi(const char *str)
{
	int	value;
	int	i;
	int	j;
	int	pn;

	value = 0;
	i = 0;
	j = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	pn = is_negative(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i++] - '0';
		j++;
		if (j > 18 && pn > 0)
			return (-1);
		if (j > 18 && pn < 0)
			return (0);
	}
	return (value * pn);
}

static int	is_negative(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}
