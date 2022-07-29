/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:03 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 11:33:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Deletes the content of and frees @p lst_ptr and all of its successors.
 *
 * @param lst_ptr The address of a pointer to an element.
 * @param del The address of the function used to delete the content
   of the element.
 * @return
 */
void	ft_lstclear(t_list **lst_ptr, void (*del)(void *))
{
	t_list	*next_lst;

	while (*lst_ptr != NULL)
	{
		next_lst = (*lst_ptr)->next;
		ft_lstdelone(*lst_ptr, del);
		*lst_ptr = next_lst;
	}
}

////////////////////////////////////////////////////////////////////////////////
