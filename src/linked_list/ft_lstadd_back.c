/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:11:12 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:31 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								 List Add Back								  ||
||																			  ||
||		Takes a list node and adds it to the back of the linked list.		  ||
||																			  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
