/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_exit_msg.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/13 17:37:27 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:03:55 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int	ft_dprintf(int fd, const char *str, ...)

#include <stdlib.h>
// void exit(int)

void	ft_exit_msg(int value, char *msg)
{
	ft_dprintf(2, "%s\n", msg);
	exit(value);
}
