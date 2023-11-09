/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpal <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:41:18 by mpal              #+#    #+#             */
/*   Updated: 2023/11/03 19:58:47 by mpal             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

int		ft_atoi(const char *str);
/*
	*converts a string into an integer numerical representation.
	*atoi stands for ASCII to integer
	*/
int		ft_isalpha(int c);
/*
	*can be used to check if the passed character is an alphabet or not.
	*It returns a non-zero value if it's an alphabet else it returns 0.
	*/
int		ft_isdigit(int c);
/*
	*can be used to check if the passed character is a digit or not.
	*It returns a non-zero value if it's a digit else it returns 0.
	*/
int		ft_isalnum(int c);
/*
	*can be used to check if the passed character is an alphanumeric or not.
	*It returns a non-zero value if it's an alphanumeric else it returns 0.
	*/
int		ft_isascii(int c);
/*
	*returns nonzero if c, in the current locale, can be represented
	*as a character in the 7–bit US-ASCII character set.
	*Otherwise, it returns 0.
	*/
int		ft_isprint(int c);
/*
	* checks the ASCII value of a character to determine
	* *whether it is a printable character or not. 
	*/
int		ft_toupper(int c);
/*
	*used to convert lowercase alphabet to uppercase
	*/
int		ft_tolower(int c);
/*
	*used to convert uppercase alphabet to lowercase
	*/
size_t	ft_strlen(const char *str);
/*
	*used to find the length of a string. 
	*The ft_strlen() function returns an integer
	*with the length of the string 
	*excluding the NULL character.
	*The ft_strlen() function counts the alphabets,
	*whitespaces, special symbols, and numbers 
	*until it encounters the NULL character in the string.
	*/
char	*ft_strchr(const char *str, int c);
/*
	*returns a pointer to the first occurrence of c
	*that is converted to a character in string.
	*The function returns NULL if the specified
	*character is not found.
	*/
char	*ft_strrchr(const char *str, int c);
/*
	*function finds the last occurrence of c
	*(converted to a character) in string . 
	*The ending null character is considered part of the string.
	*The strrchr() function returns a pointer to the
	*last occurrence of c in string . 
	*If the given character is not found, a NULL pointer is returned.
	*/
int		ft_strcmp(const char *s1, const char *s2);
/*
	*Its primary purpose is to compare the characters of the two strings
	*in sequence until it finds a mismatch 
	*or until the end of the strings is reached
	*(that is, the null character '\0').
	*/
int		ft_strncmp(char const *s1, char const *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
/*
	*The ft_strlcat() function takes the same arguments as ft_strcat() ,
	*but it also includes the full size of the destination
	*buffer as an additional argument. 
	*This allows ft_strlcat() to ensure that
	*no buffer overflow occurs. 
	*It's an excellent alternative to ft_strcat() when the
	*size of the destination buffer is known.
	*/
char	*ft_strnstr(const char *s, const char *s2, size_t n);
/*
	*locates the first occurrence of the null-terminated string
	*\c little in the string \c big, where not more than
	*\c len characters are searched
	*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
/*
	*returns the total length of the string that would have been copied
	*if there was unlimited space
	*/
char	*ft_strdup(const char *src);
/*
	*returns a pointer to a null-terminated byte string,
	*which is a duplicate of the string pointed to by s. 
	*The memory obtained is done dynamically using malloc
	*it can be freed using free(). 
	*It returns a pointer to the duplicated string s.
	*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
	*compares n bytes of two regions of memory, treating each
	*byte as an unsigned character. 
	*It returns an integer less than, equal to, or greater than zero
	*according to whether s1 is lexicographically less than,
	*equal to, or greater than s2.
	*/
void	*ft_memchr(const void *s, int c, size_t n);
/*
	*searches the first count bytes of buf for the first occurrence of c converted 
	*to an unsigned character.
	*The search continues until it finds c or examines count bytes.
	*/
void	*ft_memset(void *s, int c, size_t n);
/*
	*copies the character c (an unsigned char) to the first n characters
	*of the string pointed to, by the argument s
	*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
	*used to copy data from a memory location to
	*another memory location. 
	*The function uses pointers to represent the address
	*in which the data are stored. 
	*The ft_memcpy function returns a pointer that stores
	*the address of the destination after
	*the copy has been performed.
	*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/*
	* copies count bytes of src to dest .
	*/
void	ft_bzero(void *s, size_t n);
/*
	* fills the first n bytes of the object pointed to by dst with zero (NUL) bytes
	*/
void	*ft_calloc(size_t nmemb, size_t size);
/*
	*used to allocate a specified amount of memory and then initialize it to zero. 
	*The function returns a void pointer to this memory location, which can then
	*be cast to the desired type. 
	*The function takes in two parameters that collectively specify the 
	*amount of memory ​​to be allocated.
	*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/*
	*allocates (with malloc) and returns a substring
	*from the string 's'. The substring begins at index 'start'
	*and is of maximum size 'len'
	*/
char	*ft_strjoin(char const *s1, char const *s2);
/*
	*allocates (with malloc) and returns a new string,
	*which is the result of the concatetion of 's1' and 's2'
	*/
char	*ft_strtrim(char const *s1, char const *set);
/*
	*allocates (with malloc) and returns a copy of
	*'s1' with the characters specified in 'set' removed
	*from the beginning and the end of the string
	*/
char	**ft_split(char const *s, char c);
/*
	*allocates (with malloc) and returns an array
	*of strings obtained by splitting 's' using the character
	*'c' as a delimiter
	*/
char	*ft_itoa(int n);
/*
	*allocetes(with malloc) and returns a string
	*representing the integer
	*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*
	*applies the function 'f' to each character of the string
	*'s', and passing its index as first argument
	*to create a new string (with malloc) resulting
	*from successive applications of 'f'
	*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*
	*applies the function 'f' on each character of the string
	*passed as argument, passing its index as first argument.
	*Each charachter is passed by address to 'f' to be midofied
	*if neccessary
	*/
void	ft_putchar_fd(char c, int fd);
/*
	*outputs the character 'c' to the given
	*file descriptor
	*/
void	ft_putstr_fd(char *s, int fd);
/*
	*outputs the string 's' to the given
	*file descriptor
	*/
void	ft_putendl_fd(char *s, int fd);
/*
	*outputs the string 's' to the given
	*file descriptor followed by a new line
	*/
void	ft_putnbr_fd(int n, int fd);
/*
	**outputs the integer 'n' to the given
	*file descriptor
	*/
#endif
