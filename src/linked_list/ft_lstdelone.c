/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:16:30 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:19:27 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// t_list

#include <stdlib.h>
// void	free(void *)

void	ft_lstdelone(t_list *node, void (*del)(void *))
{
	del(node->content);
	free(node);
}
