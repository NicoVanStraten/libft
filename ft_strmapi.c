/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 13:16:02 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:24:57 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	ptr = ft_strdup(s);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	return (ptr);
}
