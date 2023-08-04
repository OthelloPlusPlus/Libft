/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoclock.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 17:32:22 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:57:44 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	*ft_calloc_exit(size_t count, size_t size)
// void	*ft_memcpy(void *dst, const void *src, size_t n)
// void	*ft_memset(void *b, int c, size_t len)

#include <stddef.h>
// size_t

static int	st_clock_size(size_t sec);
static void	st_prepare_clock(char *clock, int len, size_t sec);
static void	st_set_clock(char *clock, int len, size_t sec);

char	*ft_utoclock(size_t sec)
{
	char	*clock;
	int		len;

	len = st_clock_size(sec);
	clock = (char *)ft_calloc_exit(sizeof(char), len + 1);
	st_prepare_clock(clock, len, sec);
	if (sec < 360000)
		st_set_clock(clock, len, sec);
	return (clock);
}

static int	st_clock_size(size_t sec)
{
	int	len;

	len = 1;
	if (sec >= 10)
		len++;
	if (sec >= 60)
		len += 2;
	if (sec >= 600)
		len++;
	if (sec >= 3600)
		len += 2;
	if (sec >= 36000)
		len++;
	return (len);
}

static void	st_prepare_clock(char *clock, int len, size_t sec)
{
	if (sec >= 360000)
		ft_memcpy(clock, "SoooLong", 8);
	else
		ft_memset(clock, ':', len);
	return ;
}

static void	st_set_clock(char *clock, int len, size_t sec)
{
	clock[len - 1] = sec % 10 + '0';
	if (len >= 2)
		clock[len - 2] = sec % 60 / 10 + '0';
	if (len >= 4)
		clock[len - 4] = sec % 600 / 60 + '0';
	if (len >= 5)
		clock[len - 5] = sec % 3600 / 600 + '0';
	if (len >= 7)
		clock[len - 7] = sec % 36000 / 3600 + '0';
	if (len >= 8)
		clock[len - 8] = sec % 360000 / 36000 + '0';
}
