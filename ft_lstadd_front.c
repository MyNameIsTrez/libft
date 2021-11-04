/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:05 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:31:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds @p new to the front of @p lst.
 *        If lst is NULL then lst is set to new.
 *
 * @param lst
 * @param new
 * @return
 */

/**
 * @copydoc ft_lstadd_back()
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
