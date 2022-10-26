/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 16:26:46 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/19 16:31:50 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = 0;
	if (s == NULL)
	{
		return;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}