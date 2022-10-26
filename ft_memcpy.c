/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:02:45 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:09:28 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = 0;
	source = (unsigned char *) src;
	destination = (unsigned char *) dst;
	if (destination == source && n == 0)
	{
		return (dst);
	}
	if (source == 0 && destination == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
