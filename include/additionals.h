/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   additionals.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/20 13:23:54 by ohengelm      #+#    #+#                 */
/*   Updated: 2022/10/21 14:04:24 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADDITIONALS_H
# define ADDITIONALS_H

# include <stddef.h> //size_t

/* ====================================||==================================== *\
||																			  ||
||							   Libft: Additionals							  ||
||																			  ||																		  ||
\* ================libft===============||==============©Othello============== */
char		*ft_utoa_ultimate(unsigned long long value, char *numbers);
char		*ft_itoa_ultimate(long long value, char *numbers);
int			ft_ilen(long long value, int base);
int			ft_ulen(unsigned long long value, int base);
long long	ft_highest_num(long long val1, long long val2);
long long	ft_lowest_num(long long val1, long long val2);
int			ft_isspace(int c);
void		ft_free(void **ptr);
void		ft_free_array(void ***array);
void		*ft_realloc(void *old_ptr, size_t new_size);
void		*ft_calloc_prot(size_t count, size_t size);
int			ft_reduct_counter(int counter);
int			ft_array_len(void **array);
void		ft_exit_msg(int value, char *msg);
int			ft_random(int seed);
void		ft_striter_chrchr(char *str, int old, int new);
char		*ft_utoclock(unsigned int sec);
void		ft_check_project(char *project);

#endif