/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 15:20:01 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:10:19 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_ptr;

	i = 0;
	dest_ptr = dest;
	while (i < n)
	{
		dest_ptr[i] = c;
		i++;
	}
	return (dest);
}
