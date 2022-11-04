/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 14:00:06 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/11/03 14:10:15 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*listindex;

	listindex = *lst;
	while (listindex)
	{
		temp = listindex -> next;
		ft_lstdelone(listindex, del);
		listindex = temp;
	}
	*lst = NULL;
}
