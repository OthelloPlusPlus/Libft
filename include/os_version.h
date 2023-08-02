/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   os_version.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:14:26 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/02 14:00:27 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OS_VERSION_H
# define OS_VERSION_H
/* ====================================||==================================== *\
||																			  ||
||								Operating System							  ||
||																			  ||
||																			  ||
||																			  ||
||			 https://iq.opengenus.org/detect-operating-system-in-c/			  ||
\* =================OS=================||==============©Othello============== */

# ifdef _WIN64
#  define OS "windows 64bit"
# elif __linux__
#  define OS "linux"
# elif __APPLE__
#  define OS "apple"
# endif

#endif