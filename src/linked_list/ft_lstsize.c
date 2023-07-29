/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 18:26:21 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/05/27 17:46:08 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								   List Size								  ||
||																			  ||
||		Counts the number of nodes in list *lst.							  ||
||																			  ||
||		Returns the number of nodes.										  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

#include "libft.h" //my functions

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*pos;

	if (lst == NULL)
		return (0);
	i = 1;
	pos = lst;
	while (pos->next != NULL)
	{
		pos = pos->next;
		i++;
	}
	return (i);
}
