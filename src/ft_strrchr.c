/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:52:48 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:50:31 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							String Reverse Character						  ||
||																			  ||
||		Find the last occurence of character int c in string *s,			  ||
||			including '\0'.													  ||
||																			  ||
||		Returns the pointer to found character.								  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = c % 256;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			break ;
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
