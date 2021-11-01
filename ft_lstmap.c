/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:54 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/01 11:55:13 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_lst_head;
	t_list	**mapped_lst;

	mapped_lst_head = NULL;
	mapped_lst = &mapped_lst_head;
	while (lst != NULL)
	{
		*mapped_lst = ft_lstnew(f((*lst).content));
		if (*mapped_lst == NULL)
		{
			ft_lstclear(&mapped_lst_head, del);
			return (NULL);
		}
		mapped_lst = &(**mapped_lst).next;
		lst = (*lst).next;
	}
	return (mapped_lst_head);
}
