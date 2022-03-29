/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:58 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/15 18:39:04 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Runs the function @p fun on the content of @p lst
   and on all of @p lst its successors.
 *
 * @param lst The address of a pointer to an element.
 * @param fun The address of the function used to iterate on the list.
 * @return
 */
void	ft_lstiter(t_list *lst, void (*fun)(void *))
{
	while (lst != NULL)
	{
		fun(lst->content);
		lst = lst->next;
	}
}

////////////////////////////////////////////////////////////////////////////////
