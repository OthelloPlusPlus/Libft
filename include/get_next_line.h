/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:13:52 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 18:59:23 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/**
 * @name	Get Next Line
 * @author	Othello
 * @brief
 * Returns the next line from the File Descriptor 'fd',
 * deliminated by newline.
 * 
 * @param fd	File Descriptor to be read
 * @return		Allocated string containing the next line
 */
char		*get_next_line(int fd);

#endif
