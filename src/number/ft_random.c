/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_random.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/14 18:29:10 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:48:15 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// void	*malloc(size_t __size)
// void	free(void *)
#include <limits.h>
// INT_MAX
// SHRT_MAX

int	ft_random(int seed)
{
	static unsigned long int	random;
	void						*ptr;
	void						*ptr2;

	if (!random)
	{
		if (seed <= 0)
			seed = 1;
		ptr = malloc(INT_MAX / seed);
		ptr2 = malloc(INT_MAX / seed);
		free(ptr);
		free(ptr2);
		random += (short int)ptr2 + 12345;
	}
	random = random * 1103515245 + 12345;
	random /= (SHRT_MAX * 2);
	random %= (unsigned long)SHRT_MAX + 1;
	return (random);
}
