/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:50:24 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 14:21:55 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								  String Join								  ||
||																			  ||
||		Puts strings s1 and s2 together in a new allocated string.			  ||
||																			  ||
||		Returns the adress of the new string.								  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_strlen, ft_calloc, ft_memcpy

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		len1;
	int		len2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = (char *)ft_calloc((len1 + len2 + 1), sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_memcpy(strjoin, s1, len1);
	ft_memcpy(&strjoin[len1], s2, len2);
	return (strjoin);
}
