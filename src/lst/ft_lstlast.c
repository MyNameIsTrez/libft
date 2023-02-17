/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:56 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 11:33:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/lst/ft_lst.h"

/**
 * @brief Returns the last lst.
 *
 * @param lst The beginning of the list.
 * @return Last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
