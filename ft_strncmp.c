/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:34:18 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/17 15:27:16 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char *string1;
	unsigned char *string2;

	i = 0;
	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	while (n != 0)
	{
		if (string1[i] != string2[i]|| (string1[1] == 0 || string2[i] == 0))
		{
			return(string1[i] - string2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
