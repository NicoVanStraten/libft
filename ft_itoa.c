/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 17:32:52 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/28 18:38:18 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_numlen(int n)
{
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + (str[i] -48);
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nb;

	nb = n;
	str = ft_calloc(())
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while()
}
