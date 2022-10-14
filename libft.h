/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:31:58 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/14 11:29:38 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>

//is type
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

//to type
int	ft_tolower(char c);
int	ft_toupper(char c);

// memory type
void *ft_memset(void *dest, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

// string type
char *ft_strchr(char *str, int c);
size_t ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

//conversion
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);



# endif 