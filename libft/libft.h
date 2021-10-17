/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:05:49 by kpoquita               #+#    #+#             */
/*   Updated: 2021/10/16 10:12:21 by kpoquita         ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

size_t		ft_strlen(const char *str);

int		ft_tolower(int c);

int		ft_toupper(int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	*ft_memmove(void *dest, const void *src, size_t n);
#endif
