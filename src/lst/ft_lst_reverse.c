/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_reverse.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/30 15:06:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 13:04:25 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/lst/ft_lst.h"

t_list	*ft_lst_reverse(t_list **lst_ptr)
{
	t_list	*cur;
	t_list	*prev;
	t_list	*next;

	cur = *lst_ptr;
	prev = NULL;
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*lst_ptr = prev;
	return (*lst_ptr);
}
