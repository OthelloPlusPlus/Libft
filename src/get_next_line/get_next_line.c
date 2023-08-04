/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/11 14:22:47 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:01:10 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void		*ft_calloc(size_t count, size_t size)
// void		ft_realloc(void **ptr, size_t size)
// size_t	ft_strlen(const char *s)
// void		ft_free(void **ptr)

#include <limits.h>
// OPEN_MAX
#include <unistd.h>
// ssize_t	read(int, void *, size_t)
#include <stddef.h>
// NULL
#include <stdbool.h>
// bool

static bool	st_increase_alloc(char **next_line, char *buffer);
static bool	st_add_from_buffer(char *next_line, char *buffer);

#ifndef BUFFER_SIZE
# define BUFFER_SIZE	4096
#endif

#ifndef OPEN_MAX
# define  OPEN_MAX	256
#endif

enum	e_indexGNL
{
	DST,
	SRC,
	SIZE
};

char	*get_next_line(int fd)
{
	static char	*buffer[OPEN_MAX];
	char		*next_line;

	if (fd < 0 || fd > OPEN_MAX || read(fd, buffer[fd], 0) != 0)
		return (NULL);
	if (!buffer[fd])
	{
		buffer[fd] = ft_calloc(sizeof(char), BUFFER_SIZE);
		if (buffer[fd] == NULL)
			return (NULL);
	}
	next_line = NULL;
	if (buffer[fd][0] == 0)
		read(fd, buffer[fd], BUFFER_SIZE);
	while (buffer[fd][0] != 0)
	{
		if (!st_increase_alloc(&next_line, buffer[fd]) || \
			st_add_from_buffer(next_line, buffer[fd]))
			break ;
		read(fd, buffer[fd], BUFFER_SIZE);
	}
	if (buffer[fd][0] == 0)
		ft_free((void *)&buffer[fd]);
	return (next_line);
}

/**
 * @brief 
 * Counts how much the allocation needs to be increased based on the buffer.
 * Reallocateds string next_line to the required size.
 * 
 * @param next_line	Pointer to the address of next_line
 * @param buffer	Pointer to the buffer
 * @return true if the reallocation was succesfull
 */
static bool	st_increase_alloc(char **next_line, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	ft_realloc((void *)next_line, ft_strlen(*next_line) + i + 1);
	return (next_line != NULL);
}

/**
 * @brief 
 * Transfers chacters from buffer, setting the old location to 0.
 * Characters are moved to the end of next_line until a new line is found.
 * After that they are set to the beginning of buffer.
 *  
 * @param next_line	String containing the next line
 * @param buffer	Buffer to be set to the next line
 * @return			True if newline has been found, False otherwise
 */
static bool	st_add_from_buffer(char *next_line, char *buffer)
{
	int		i[SIZE];
	bool	newline;

	i[DST] = ft_strlen(next_line);
	i[SRC] = 0;
	newline = false;
	while (i[SRC] < BUFFER_SIZE)
	{
		if (!newline)
		{
			next_line[i[DST]] = buffer[i[SRC]];
			if (next_line[i[DST]] == '\n')
			{
				newline = true;
				i[DST] = -1;
			}
		}
		else
			buffer[i[DST]] = buffer[i[SRC]];
		buffer[i[SRC]] = 0;
		++i[DST];
		++i[SRC];
	}
	return (newline);
}
