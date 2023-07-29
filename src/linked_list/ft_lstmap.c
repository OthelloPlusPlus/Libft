/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:23:30 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:46:00 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								 List map(???)								  ||
||																			  ||
||		Creates a new list. Copies every node using function (*f)			  ||
||		If if failed, uses function (*del) to clear the new list.			  ||
||																			  ||
||		Returns a pointer to the new list.									  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

#include <stdlib.h> //free

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
