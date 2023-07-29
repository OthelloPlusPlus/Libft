/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:11:51 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:35 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								 List Add Front								  ||
||																			  ||
||		Takes a list node and adds it to the front of the linked list.		  ||
||																			  ||
\* ================libft===============||==============©Othello============== */
#include "libft.h" //my functions

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
