/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/10 19:52:21 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/09/15 16:49:38 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

float	ft_sqrt(float radicand)
{
	float	step;
	float	answer;
	float	value;

	step = 1;
	answer = -1;
	while (1)
	{
		value = 0;
		while (value < radicand)
		{
			answer = answer + step;
			value = answer;
			value = value * answer;
		}
		if (value == radicand || step < 0.000001)
			break ;
		answer = answer - step;
		step = step / 10;
	}
	return (answer);
}
