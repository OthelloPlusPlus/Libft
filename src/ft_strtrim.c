/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 17:51:49 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/20 14:03:43 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								  String Trim								  ||
||																			  ||
||		Removes characters from *set from the start and end of string *s1	  ||
||																			  ||
||		Returns the trimmed strim.											  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft_src.h" //ft_calloc, ft_strchr

static void	ft_move_counter(char const *s1, char const *set, int *l, int *r);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		left;
	int		right;
	char	*strtrim;

	if (s1 == NULL)
		return (NULL);
	left = 0;
	right = 0;
	ft_move_counter(s1, set, &left, &right);
	strtrim = (char *)ft_calloc((right - left + 2), sizeof(char));
	if (strtrim == NULL)
		return (NULL);
	if (right <= 0)
		return (strtrim);
	ft_memcpy(strtrim, &s1[left], right - left + 1);
	return (strtrim);
}

static void	ft_move_counter(char const *s1, char const *set, int *l, int *r)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (!(ft_strchr(set, s1[i])))
		{
			*r = i;
			if (*l == 0 && ft_strchr(set, s1[0]) != 0)
				*l = i;
		}
		i++;
	}
}
