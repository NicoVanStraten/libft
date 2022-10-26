/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:41:27 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:14:30 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *) str;
	if ((char)c == '\0')
	{
		while (*str)
		{
			str++;
		}
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return (&string[i]);
		}
		i++;
	}
	return (NULL);
}
