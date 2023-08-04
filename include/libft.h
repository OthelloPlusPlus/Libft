/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohengelm <ohengelm@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 19:58:35 by ohengelm      #+#    #+#                 */
/*   Updated: 2023/08/04 19:11:23 by ohengelm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_add.h"
# include "ft_printf.h"
# include "get_next_line.h"

# include <stddef.h>
// size_t

/* ====================================||==================================== *\
||																			  ||
||								  Is Character								  ||
||																			  ||
||		dir:	ischar														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - Is Alphabet
 * @author	Othello
 * @brief 
 * Checks whether the given character is an alphabetical character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is alphabetical, and False otherwise.
 */
int		ft_isalpha(int c);

/**
 * @name	Libft - Is Alphabet
 * @author	Othello
 * @brief 
 * Checks whether the given character is an alphabetical character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is alphabetical, and False otherwise.
 */
int		ft_isalpha(int c);

/**
 * @name	Libft - Is Digit
 * @author	Othello
 * @brief 
 * Checks whether the given character is a digit.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is a digit, and False otherwise.
 */
int		ft_isdigit(int c);

/**
 * @name	Libft - Is Alphanumeric
 * @author	Othello
 * @brief 
 * Checks whether the given character is an alphanumeric character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is alphanumeric, and False otherwise.
 */
int		ft_isalnum(int c);

/**
 * @name	Libft - Is ASCII
 * @author	Othello
 * @brief 
 * Checks whether the given character is an ascii character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is ascii, and False otherwise.
 */
int		ft_isascii(int c);

/**
 * @name	Libft - Is Print
 * @author	Othello
 * @brief 
 * Checks whether the given character is a printable character.
 * 
 * @param c int value of the character to be checked
 * @return	True if the character is printable, and False otherwise.
 */
int		ft_isprint(int c);

/* ====================================||==================================== *\
||																			  ||
||									Strings									  ||
||																			  ||
||		dir:	string														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - String Length
 * @author	Othello
 * @brief 
 * Counts the length of the passed string.
 * 
 * @param s	String to be counted.
 * @return	Length of the string
 */
size_t	ft_strlen(const char *s);

/**
 * @name	Libft - String Length Copy
 * @author	Othello
 * @brief 
 * Copies up to 'dstsize' characters from character array 'src'
 * to character array 'dst'. Ensures 'dst' is \0 terminated.
 * 
 * @param dst		Pointer to the destination character array
 * @param src		Pointer to the source character array
 * @param dstsize	The size for which dst has memory available
 * @return			Length of the source character array
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @name	Libft - String Length Concatenate
 * @author	Othello
 * @brief 
 * Concatenates characters from character array 'src' to character array 'dst'.
 * Ensurers that 'dst' is \0 terminated.
 * 
 * @param dst		Pointer to the destination character array
 * @param src		Pointer to the source character array
 * @param dstsize	The size for which dst has memory available
 * @return			Length of the source and destination character arrays
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @name	Libft - String Character
 * @author	Othello
 * @brief 
 * Searches character array 's' for the first occurence of character 'c'.
 * 
 * @param s	Character array to be searched
 * @param c	Character to be found
 * @return	Pointer to the first occurence of character 'c'.
 * Or NULL if character 'c' is not found.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @name	Libft - String Reverse Character
 * @author	Othello
 * @brief 
 * Searches character array 's' for the last occurence of character 'c'.
 * 
 * @param s	Character array to be searched
 * @param c	Character to be found
 * @return	Pointer to the last occurence of character 'c'.
 * Or NULL if character 'c' is not found.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @name	Libft - String Length Compare
 * @author	Othello
 * @brief 
 * Compares character arrays 's1' and 's2' for 'n' characters,
 * looking for the first difference.
 * 
 * @param s1	Pointer to the first character array
 * @param s2	Pointer to the second character array
 * @param n		Maximum characters to be compared
 * @return		The value of the first difference found between the arrays,
 * 				calculated as s2 - s1
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @name	Libft - String In String
 * @author	Othello
 * @brief 
 * Searches the first 'len' characters of 'haystack'
 * to find the first occurence of 'needle'.
 * 
 * @param haystack	Pointer to the character array to be searched
 * @param needle	Pointer to the character array to be found in the haystack
 * @param len		Maximum amount of characters to be searched
 * @return			Pointer to the first occurence of needle in haystack,
 * 					or NULL if not found
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @name	Libft - String Duplicate
 * @author	Othello
 * @brief 
 * Returns an allocated duplicate of character array 's'
 * 
 * @param s	Pointer to the character array to be duplicated
 * @return	Pointer to the duplicated character array
 */
char	*ft_strdup(const char *s);

/**
 * @name	Libft - Sub String
 * @author	Othello
 * @brief 
 * Returns an allocated duplcate of character array 's',
 * starting from position 'start' for a maximum of 'len' characters.
 * 
 * @param s		Pointer to the character array frmo which to create the substring
 * @param start	Index of start position
 * @param len	Maximum length of the substring
 * @return		Pointer to the duplicated character array.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @name	Libft - String Join
 * @author	Othello
 * @brief 
 * Copies character arrays 's1' and 's2' into a new allocated character array.
 * 
 * @param s1	Pointer to the prefix character array
 * @param s2	Pointer to the suffix character array
 * @return		Pointer to the joined character array
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @name	Libft - Split
 * @author	Othello
 * @brief 
 * Splits character array 's' into a string array based on deliminator 'c'
 * 
 * @param s	Pointer to the character array
 * @param c	Deliminating character
 * @return	char** to the array
 */
char	**ft_split(char const *s, char c);

/**
 * @name	Libft - String Trim
 * @author	Othello
 * @brief 
 * Copies character array 's',
 * excluding characters contained in character array 'set'
 * 	from its beginning and end.
 * 
 * @param s1 
 * @param set 
 * @return char* 
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @name	Libft -  String Map Index
 * @author	Othello
 * @brief 
 * Allocates a copy of character array 's',
 * iterating each character using function 'f'
 * 
 * @param s	Pointer to the character array
 * @param f Function to be used to manipulate each character
 * @return	Pointer to the adjusted character array
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @name	Libft -  String Iterate
 * @author	Othello
 * @brief 
 * Iterates over each character from character array 's',
 * using function 'f' to manipulate them.
 * 
 * @param s	Pointer to the character array
 * @param f	Function to be used to manipulate each character
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* ====================================||==================================== *\
||																			  ||
||									 Memory									  ||
||																			  ||
||		dir:	mem															  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - Memory Set
 * @author	Othello
 * @brief 
 * Sets 'len' bytes of the memory block 'b' to value 'c'.
 * 
 * @param b		Pointer to the memory block
 * @param c		Value to be set in each byte
 * @param len	Number of bytes to fill
 * @return		Pointer to the memory block
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * @name	Libft - Be Zero
 * @author	Othello
 * @brief 
 * Sets 'len' bytes of the memory block 's' to 0.
 * 
 * @param s		Pointer to the memory block
 * @param len	Number of bytes to set
 */
void	ft_bzero(void *s, size_t n);

/**
 * @name	Libft - Memory copy
 * @author	Othello
 * @brief 
 * Copies 'n' bytes of the memory block 'src' to memory block 'dst'.
 * Overlap causes undefined behavior.
 * 
 * @param dst	Pointer to the destination memory block
 * @param src	Pointer to the source memory block
 * @param n		Number of bytes to copy
 * @return		Pointer to the destination memory block
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @name	Libft - Memory Move
 * @author	Othello
 * @brief 
 * Copies 'len' bytes of memory block 'src' to memory block 'dst'
 * Overlap is does not cause undefined behavoir.
 * 
 * @param dst	Pointer to the destination memory block
 * @param src	Pointer to the source memory block
 * @param len	Number of bytes to copy
 * @return		Pointer to the destination memory block
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @name	Libft - Memory Character
 * @author	Othello
 * @brief 
 * Searches memory block 's' for 'n' bytes for the first occurence of byte 'c'.
 * 
 * @param s	Memory block to be searched
 * @param c Byte to be found
 * @param n 
 * @return	A pointer to the first occurence of byte 'c', or NULL of not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @name	Libft - Memory Compare
 * @author	Othello
 * @brief 
 * Compares memory blocks 's1' and 's2' for 'n' characters,
 * looking for the first difference.
 * 
 * @param s1	First memory block
 * @param s2	Second memory block
 * @param n 	Maximum bytes to be compared
 * @return		The value of the first difference found between the memory blocks,
 * 				calculated as s2 - s1
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* ====================================||==================================== *\
||																			  ||
||									 Convert								  ||
||																			  ||
||		dir:	to															  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - To Upper
 * @author	Othello
 * @brief 
 * If character 'c' is a lowercase character,
 * converts it to its uppercase equivalent.
 * 
 * @param c	Character to be converted
 * @return	The converted character
 */
int		ft_toupper(int c);

/**
 * @name	Libft - To Lower
 * @author	Othello
 * @brief 
 * If character 'c' is an uppercase character,
 * converts it to its lowercase equivalent.
 * 
 * @param c	Character to be converted
 * @return	The converted character
 */
int		ft_tolower(int c);

/**
 * @name	Libft - Alphabetical To Integer
 * @author	Othello
 * @brief 
 * Converts character array 'str' to its integer equivalent.
 * 
 * @param str	Pointer to the character array
 * @return		Integer value represented in str,
 * 				or 0 under INT_MIN, or -1 if over INT_MAX
 */
int		ft_atoi(const char *str);

/**
 * @name	Libft - Interger To Alphabetical
 * @author	Othello
 * @brief 
 * Converts integer 'n' into its allocated character array equivalent.
 * 
 * @param n	Integer to be converted
 * @return	Pointer to the character array
 */
char	*ft_itoa(int n);

/* ====================================||==================================== *\
||																			  ||
||							   Memory Allocation							  ||
||																			  ||
||		dir:	alloc														  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - Contiguously Memory Allocation
 * @author	Othello
 * @brief 
 * Allocated memory for 'count' objects of 'size' bytes.
 * Sets all bytes to 0.
 * 
 * @param count	Amount of objects memory is to be allocated for
 * @param size	Size of each object
 * @return		Pointer to the allocated memory
 */
void	*ft_calloc(size_t count, size_t size);

/* ====================================||==================================== *\
||																			  ||
||							Print to File Descriptor						  ||
||																			  ||
||		dir:	put															  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

/**
 * @name	Libft - Put Character to File Desciptor
 * @author	Othello
 * @brief 
 * Writes char 'c' into the File Descriptor 'fd'
 * 
 * @param c		Character to be printed
 * @param fd	Destination File Descriptor
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @name	Libft - Put String to File Desciptor
 * @author	Othello
 * @brief 
 * Writes character array 's' to File Descriptor 'fd'
 * 
 * @param s		Character array to be printed
 * @param fd	Destination File Descriptor
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @name	Libft - Put Endline to File Desciptor
 * @author	Othello
 * @brief 
 * Writes character array 's' with a trailing endline to File Descriptor 'fd'
 * 
 * @param s		Character array to be printed
 * @param fd	Destination File Descriptor
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @name	Libft - Put Number to File Desciptor
 * @author	Othello
 * @brief 
 * Writes integer 'n' to File Descriptor 'fd'
 * 
 * @param n		Integer to be printed
 * @param fd	Destination File Descriptor
 */
void	ft_putnbr_fd(int n, int fd);

/* ====================================||==================================== *\
||																			  ||
||								  Linked List								  ||
||																			  ||
||		dir:	linked_list													  ||
||																			  ||
\* ================libft===============||==============©Othello============== */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @name	Libft - List New
 * @author	Othello
 * @brief 
 * Allocates a new node and stores 'content' in it.
 * 
 * @param content	Content to be part of the node
 * @return 			Address to the new node
 */
t_list	*ft_lstnew(void *content);

/**
 * @name	Libft - List Add Front
 * @author	Othello
 * @brief 
 * Adds the node 'new' to the front of the linked list 'lst'
 * 
 * @param lst	Pointer to the address of the linked list
 * @param new	Node to be added
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @name	Libft - List Size
 * @author	Othello
 * @brief 
 * Counts the amount of nodes in the linked list 'lst'.
 * 
 * @param lst	Pointer to the linked list
 * @return		Amount of nodes in the linked list
 */
int		ft_lstsize(t_list *lst);

/**
 * @name	Libft - List Last
 * @author	Othello
 * @brief 
 * Returns the last node of the linked list 'lst'
 * 
 * @param lst	Pointer to the linked list
 * @return		Address of the last node
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @name	Libft - List Add Back
 * @author	Othello
 * @brief 
 * Adds the node 'new' to the back of the linked list 'lst'.
 * 
 * @param lst	Pointer to the linked list
 * @param new	Node to be added
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @name	Libft - List Delete One
 * @author	Othello
 * @brief 
 * Frees the node 'node' and removes it from the linked list.
 * Uses function 'del' to delete its content.
 * 
 * @param node	Pointer to the node to be deleted
 * @param del	Function to free the node's content
 */
void	ft_lstdelone(t_list *node, void (*del)(void *));

/**
 * @name	Libft - List Clear
 * @author	Othello
 * @brief 
 * Clears the entire list starting from node 'lst'.
 * Uses function 'del' to delete each node's content.
 * 
 * @param lst	Pointer to the address of the first node to be deleted
 * @param del	Function to free the nodes' content
 */
void	ft_lstclear(t_list **lst, void (*del) (void *));

/**
 * @name	Libft - List Iterate
 * @author	Othello
 * @brief
 * Iterates over the entire list starting from node 'lst',
 * applying function 'f' over each node.
 * 
 * @param lst	Pointer to the first node to be adjusted
 * @param f		Function to apply on each node
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @name	Libft - List Mapping
 * @author	Othello
 * @brief 
 * Copies linked list starting from node 'lst' and alters it using function 'f'.
 * In case of error uses function 'del' to clear the list.
 * 
 * @param lst	Pointer to the first node of the list to be copied
 * @param f		Function to apply to each node
 * @param del	Function to free the nodes' content
 * @return		Pointer to the new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
