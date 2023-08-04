/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:26:21 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:20:36 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// t_list

#include <stddef.h>
// NULL

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*pos;

	if (lst == NULL)
		return (0);
	i = 1;
	pos = lst;
	while (pos->next != NULL)
	{
		pos = pos->next;
		i++;
	}
	return (i);
}
