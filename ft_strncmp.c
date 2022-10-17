/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 12:34:18 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/17 13:05:55 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		return(s1[i] - s2[i]);
	}
}

 