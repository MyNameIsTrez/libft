/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:05 by sbos          #+#    #+#                 */
/*   Updated: 2022/07/29 12:54:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "src/lst/ft_lst.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Adds @p new to the front of @p lst_ptr.
   If @p lst_ptr is NULL then @p lst_ptr is set to @p new.
 *
 * @param lst_ptr The address of a pointer to the first link of a list.
 * @param new The address of the element to be added to the list.
 * @return
 */
void	ft_lstadd_front(t_list **lst_ptr, t_list *new)
{
	if (*lst_ptr == NULL)
		*lst_ptr = new;
	else if (new != NULL)
	{
		new->next = *lst_ptr;
		*lst_ptr = new;
	}
}

////////////////////////////////////////////////////////////////////////////////
