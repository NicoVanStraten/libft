/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 12:46:51 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/01 11:40:03 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	if (dst)
		i = ft_strlen(dst);
	x = i;
	if (dstsize <= i)
		return (ft_strlen(src) + dstsize);
	if (dstsize > i)
	{
		dstsize -= i;
		while (j < dstsize - 1 && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dstsize > j)
		return (ft_strlen(src) + x);
	return (ft_strlen (src) + ft_strlen(dst));
}

// int main(void)
// {
// 	char *dst;
// 	char *src;
// 	size_t dstsize;

// 	src = "allo"
// 	dstsize = 
// 	printf("test: %i,", ft_strlcat(dst, src, dstsize))
// }