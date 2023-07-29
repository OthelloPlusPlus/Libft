/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:45:06 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 19:45:06 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||							 String Length Compare							  ||
||																			  ||
||		Compares the first size_t n characters of the strings s1 and s2.	  ||
||		Comparison is done as unsinged characters, making \200 > \0.		  ||
||																			  ||
||		Returns the first found difference as s2 -s1.						  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stddef.h> //size_t

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
