/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:08 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 12:06:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back_lst;

	if (*lst == NULL)
		*lst = new;
	else
	{
		back_lst = ft_lstlast(*lst);
		back_lst->next = new;
	}
}
