/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:32:09 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/18 12:48:59 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
	void *ptr;
	
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_bzero(ptr, size * count);
	return (ptr);
}