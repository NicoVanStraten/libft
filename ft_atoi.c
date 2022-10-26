/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:13:39 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/26 14:04:45 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	j = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j = -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] -48);
		i++;
	}
	if (j < 0)
		return (r * j);
	return (r);
}
