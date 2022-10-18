/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 13:42:39 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/18 13:49:32 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *string;

	i = ft_strlen(s);
	string = (char *) s;
	while (i >  -1)
	{
		if (s[i] == (char)c)
		{
			return (&string[i]);
		}
		i--;
	}
	if (c == 0)
	{
		return (&string[i]);
	}
	return (NULL);
}