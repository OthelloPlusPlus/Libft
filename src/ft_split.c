/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:33:08 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/12/01 13:46:07 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||									 Split									  ||
||																			  ||
||		Takes string s and splits it on character c.						  ||
||		Puts every piece in a 2d allocated memory.							  ||
||		If it fails to allocate memory, it frees the entire array.			  ||
||																			  ||
||		Returns pointer to the 2d Array										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include <stdlib.h> //free

#include "libft_src.h" //ft_calloc, ft_memcpy

static int	word_count(char const *s, char c);
static int	word_length(char const *s, char c, int *i);
static char	**error_free(char **split_array);

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		words;
	int		i;
	int		j;
	int		length;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	split_array = (char **)ft_calloc((words + 1), sizeof(char *));
	if (split_array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		length = word_length(s, c, &i);
		split_array[j] = (char *)ft_calloc((length + 1), sizeof(char));
		if (split_array[j] == NULL)
			return (error_free(split_array));
		ft_memcpy(split_array[j], &s[i - length], length);
		j++;
	}
	return (split_array);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	word_length(char const *s, char c, int *i)
{
	int	length;

	length = 0;
	while (s[*i] == c)
	{
		*i = *i + 1;
	}
	while (s[*i] != c && s[*i] != '\0')
	{
		length++;
		*i = *i + 1;
	}
	return (length);
}

static char	**error_free(char **split_array)
{
	int	i;

	i = 0;
	while (split_array[i] != 0)
	{
		free(split_array[i]);
		i++;
	}
	free(split_array);
	return (NULL);
}
