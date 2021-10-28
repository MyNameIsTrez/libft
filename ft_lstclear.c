/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:03 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/28 17:00:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	while (*lst != NULL)
	{
		next_lst = (**lst).next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}
