/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_project.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:42:57 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 20:06:11 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	ft_free(void **ptr)
// char	*ft_strdup(const char *s)
// char	*ft_strjoin(const char *s1, const char *s2)

#include <stdlib.h>
// int	atexit(void (*_Nonnull)(void))
// int	system(const char *)

static char	*rememeber_name(char *str);
static void	check_with_system(void);
static void	check_for(char *check, char *name);

void	ft_check_project(char *project)
{
	rememeber_name(project);
	atexit(check_with_system);
}

static char	*rememeber_name(char *str)
{
	static char	*name = NULL;

	if (str != NULL && name != NULL)
		ft_free((void *)&name);
	if (str != NULL)
	{
		if (str[0] == '.' && str[1] == '/')
			name = ft_strdup(&str[2]);
		else
			name = ft_strdup(str);
	}
	return (name);
}

static void	check_with_system(void)
{
	char	*name;

	name = rememeber_name(NULL);
	check_for("leaks -q ", name);
	ft_free((void *)&name);
}
	// check_for("lsof ", name);

static void	check_for(char *check, char *name)
{
	char	*string;

	string = ft_strjoin(check, name);
	system(string);
	ft_free((void *)&string);
}
