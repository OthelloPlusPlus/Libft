/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   h_os_version.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/16 18:14:26 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/04/16 18:14:28 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_OS_VERSION_H
# define H_OS_VERSION_H
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