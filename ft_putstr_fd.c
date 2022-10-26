/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:04:30 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/19 12:10:20 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s == NULL)
		return;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}