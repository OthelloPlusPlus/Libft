/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:13:52 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/16 18:13:54 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ====================================||==================================== *\
||																			  ||
||								 get_next_line								  ||
||																			  ||																		  ||
\* ================libft===============||==============©Othello============== */
char		*get_next_line(int fd);
/* ====================================||==================================== *\
||							 get_next_line_utils.c							  ||
\* ================libft===============||==============©Othello============== */
char		*bigger_calloc(char	*buffer, char *old_line);
char		*gnl_free(char *mem);
int			add_buffer(char	*next_line, char *buffer);

#endif
