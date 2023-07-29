/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:30:34 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 19:58:12 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								   Memory Set								  ||
||																			  ||
||		Fills the first size_t len characters of void *b 					  ||
||			with (unsigned char)int c.										  ||
||																			  ||
||		Returns its first argument.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stddef.h> //size_t

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
