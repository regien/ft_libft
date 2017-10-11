/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 19:34:42 by regien            #+#    #+#             */
/*   Updated: 2017/10/09 21:56:05 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *str);
size_t	ft_strlen(char const*str);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_swap(int *a, int *b);
void	ft_putnbr(int nbr);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memdel(void **ap);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, char *src, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strnew(size_t size);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_strclr(char *s);
int		ft_strequ(char const *s1, char const *s2);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strtrim(char const *s);
int		ft_atoi(char const *str);
char	*ft_itoa(int n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strcat(char *dst,const char *src);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	ft_strdel(char **as);
char*	ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char * s1, const char *s2, size_t n);


void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
//char	*ft_strstr(const char *haystack, const char *needle);
void	*ft_memmove(void *dest, const void *src, size_t n);



// extra functions
// mostly exam functions
char	*ft_strrevert(char *s1);
size_t	ft_nbrlen(int nbr, int base);

// linked list part
// delete me when you done
typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct	s_list	*next;
}		s_list;
// todas las funciones de linked list deben ir debajo

#endif
