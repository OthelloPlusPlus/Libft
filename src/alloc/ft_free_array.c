/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_array.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/10 20:08:11 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 16:11:06 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft_add.h"

#include <stdlib.h>
// NULL
// void	free(void *)

void	ft_free_array(void ***array)
{
	int	i;

	i = 0;
	if (*array == NULL)
		return ;
	while ((*array)[i] != NULL)
	{
		ft_free(&(*array)[i]);
		i++;
	}
	free(*array);
	*array = NULL;
}
