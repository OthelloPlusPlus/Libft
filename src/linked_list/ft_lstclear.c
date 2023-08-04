/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:15:58 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:18:24 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// t_list
// void	ft_lstdelone(t_list *lst, void (*del)(void *))

#include <stddef.h>
// NULL

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*next;

	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
