/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:05 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 11:33:34 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds @p new to the front of @p lst.
   If lst is NULL then lst is set to new.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return
 */

/**
 * @copydoc ft_lstadd_back()
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
