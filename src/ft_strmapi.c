/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:47:34 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 13:49:20 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							 String Map(?) Iterate							  ||
||																			  ||
||		Alters string s using function f, creating a new string.			  ||
||																			  ||
||		Returns new string.													  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen, ft_calloc

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*str;
	int		i;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	str = (char *)ft_calloc((length + 1), sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	return (str);
}
