/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:16:30 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:45:44 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								List Delete One								  ||
||																			  ||
||		Clears string lst->content using function del.						  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions
#include <stdlib.h> //free

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
