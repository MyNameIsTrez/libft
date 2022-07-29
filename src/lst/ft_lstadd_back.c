/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/16 11:33:27 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 11:33:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief Adds @p new to the back of @p lst_ptr.\n
          If @p lst_ptr is NULL then @p lst_ptr is set to @p new.
 *
 * @param lst_ptr The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return
 */
void	ft_lstadd_back(t_list **lst_ptr, t_list *new)
{
	if (*lst_ptr == NULL)
		*lst_ptr = new;
	else
		ft_lstlast(*lst_ptr)->next = new;
}

////////////////////////////////////////////////////////////////////////////////
