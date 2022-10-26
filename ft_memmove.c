/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:20:45 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:09:55 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = 0;
	source = (unsigned char *) src;
	destination = (unsigned char *) dst;
	if (dst == 0 && src == 0)
	{
		return (NULL);
	}
	if (destination > source)
	{
		while (len > 0)
		{
			len--;
			destination[len] = source[len];
		}
	}
	while (i < len)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
