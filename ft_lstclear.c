/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:03 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/04 15:52:02 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes the content of and frees @p lst and all of its successors.
 *
 * @param lst The address of a pointer to an element.
 * @param del The address of the function used to delete the content
   of the element.
 * @return
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	while (*lst != NULL)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}
