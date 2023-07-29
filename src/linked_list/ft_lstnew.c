/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:25:47 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:46:04 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||									List New								  ||
||																			  ||
||		Creates a new node for the list.									  ||
||		Puts content in ->content of the new node.							  ||
||																			  ||
||		Returns the adres of the new node.									  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)ft_calloc(1, sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (!content)
		list->content = NULL;
	else
		list->content = content;
	list->next = NULL;
	return (list);
}
