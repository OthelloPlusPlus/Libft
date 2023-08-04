/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_reduct_counter.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/13 17:37:38 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/09/13 17:37:40 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_reduct_counter(int counter)
{
	if (counter > 0)
		return (counter - 1);
	if (counter < 0)
		return (counter + 1);
	return (counter);
}
