/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:33:08 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:23:54 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	*ft_calloc(size_t count, size_t size)
// void	*ft_memcpy(void *dst, const void *src, size_t n)

#include <stdlib.h>
// void	free(void *)
// NULL
#include <stdbool.h>
// bool

static int	st_word_count(const char *s, char c);
static char	*st_next_word(const char **s, char c);
static bool	st_error_free(char **split_array, char *word);

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		words;
	int		i;

	if (s == NULL)
		return (NULL);
	words = st_word_count(s, c);
	split_array = (char **)ft_calloc((words + 1), sizeof(char *));
	if (split_array == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		split_array[i] = st_next_word(&s, c);
		if (st_error_free(split_array, split_array[i]))
			break ;
		i++;
	}
	return (split_array);
}

/**
 * @brief 
 * Counts the words in the passed string 's'
 * 
 * @param s	Pointer to the string
 * @param c	Deliminator defining the words
 * @return	Amount of words 
 */
static int	st_word_count(char const *s, char c)
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

/**
 * @brief 
 * Copies the next word from string 's', defined by deliminator 'c'
 * into a new allocated string.
 * Moves the address of 's' forward to the first char after the word.
 * 
 * @param s	Pointer to the address of the string
 * @param c	Deliminator defining the words
 * @return	Copy of the word
 */
static char	*st_next_word(const char **s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (**s == c)
		++(*s);
	while ((*s)[i] != c && (*s)[i] != '\0')
		++i;
	word = (char *)ft_calloc(i + 1, sizeof(char));
	if (word != NULL)
		ft_memcpy(word, *s, i);
	(*s) += i;
	return (word);
}

/**
 * @brief 
 * Checks for allocation errors and clears the array if needed.
 * 
 * @param split_array	Array to be cleared
 * @param word			Word to be check
 * @return true
 * @return false 
 */
static bool	st_error_free(char **split_array, char *word)
{
	if (word == NULL)
	{
		ft_free_array((void ***)&split_array);
		return (true);
	}
	return (false);
}
