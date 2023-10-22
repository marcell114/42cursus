#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
		void		*content;
		size_t	content_size;
		struct	s_list *next;
}						t_list;

int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_toupper(char *str);
void	ft_tolower(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *s, const char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char    *ft_strdup(const char *src);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);


# endif