/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:51:28 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/17 14:58:16 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *string1;
	unsigned char *string2;

	i = 0;
	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	while (i < n)
	{
		if (string1[i] != string2[i] )
		{
			return(string1[i] - string2[i]);
		}
		i++;
	}
	return (0);
}