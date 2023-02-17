/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:54 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/15 18:37:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/lst/ft_lst.h"

/**
 * @brief Creates a new chain of lists by running @p fun
   on the content of @p lst and all of its successors.
 *
 * @param lst The address of a pointer to an element.
 * @param fun The address of the function used to iterate on the list.
 * @param del The address of the function used to
   delete the content of an element, if needed.
 * @return The new list;\n
   NULL if the allocation fails.
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
