/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:17:44 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:55 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								   List Last								  ||
||																			  ||
||		Finds the address of the last node in the linked list.				  ||
||																			  ||
||		Returns the address of the last node in the linked list.			  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
