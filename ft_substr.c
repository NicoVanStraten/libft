/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 11:55:34 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:54:23 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	modlen;

	if (s == NULL )
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (ft_strlen(s) - start < len)
		modlen = ft_strlen(s) - start + 1;
	else
		modlen = len + 1;
	ptr = (char *)malloc(modlen);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, &s[start], modlen);
	return (ptr);
}
