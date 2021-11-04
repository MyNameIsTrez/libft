/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:54 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 14:19:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new chain of lists by running @p fun
   on the content of @p lst and all of its successors.
 *
 * @param lst
 * @param fun Transforms content.
 * @param del Ran when a malloc fails.
 * @return
 */
t_list	*ft_lstmap(t_list *lst, void *(*fun)(void *), void (*del)(void *))
{
	t_list	*mapped_lst_head;
	t_list	**mapped_lst;

	mapped_lst_head = NULL;
	mapped_lst = &mapped_lst_head;
	while (lst != NULL)
	{
		*mapped_lst = ft_lstnew(fun(lst->content));
		if (*mapped_lst == NULL)
		{
			ft_lstclear(&mapped_lst_head, del);
			return (NULL);
		}
		mapped_lst = &((*mapped_lst)->next);
		lst = lst->next;
	}
	return (mapped_lst_head);
}
