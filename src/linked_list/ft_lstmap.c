/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:23:30 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 15:20:19 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// t_list
// t_list	*ft_lstnew(void *content)
// void		ft_lstclear(<error-type> **, void (*)(void *))
// void		ft_lstadd_back(<error-type> **lst, <error-type> *new)

#include <stdlib.h>
// void	free(void *)
// NULL

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	if (!lst)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newnode = ft_lstnew((*f)(lst->content));
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
