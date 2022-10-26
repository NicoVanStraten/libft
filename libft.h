/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:31:58 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/19 16:31:05 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//is type
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

//to type
int	ft_tolower(int c);
int	ft_toupper(int c);

// memory type
void *ft_memset(void *dest, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

// string type
char *ft_strchr(const char *str, int c);
size_t ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strdup(const char *s1);

//conversion
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
int ft_atoi(const char *str);

// malloc
void * ft_calloc(size_t count, size_t size);

// additional
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_striteri(char *s, void (*f)(unsigned int, char*));


# endif 