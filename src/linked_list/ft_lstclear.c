/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:15:58 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:39 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||									List Clear								  ||
||																			  ||
||		Clears the entire list starting from lst using function (*del).		  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

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
