/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:51:56 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/03/10 19:51:56 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* ====================================||==================================== *\
||																			  ||
||								String Character							  ||
||																			  ||
||		Finds the first occurence of character int s in string *s, 			  ||
||			including '\0'.													  ||
||																			  ||
||		Returns the pointer of found characer.								  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = c % 256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
