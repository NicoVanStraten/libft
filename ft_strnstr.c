/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:43:05 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:26:00 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s;
	size_t	n;
	char	*modhay;

	s = 0;
	n = 0;
	modhay = (char *) haystack;
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle[n] == '\0')
		return (&modhay[s]);
	while (modhay[s] != '\0')
	{
		while (modhay[s + n] == needle[n] && s + n < len)
		{
			n++;
			if (needle[n] == '\0')
				return (&modhay[s]);
		}
		s++;
		n = 0;
	}
	return (NULL);
}
