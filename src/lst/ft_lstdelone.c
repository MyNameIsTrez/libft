/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:01 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/16 11:33:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/lst/ft_lst.h"

/**
 * @brief Deletes the content of a single lst using @p lst_ptr and @p del,
   and then ft_frees lst.
 *
 * @param lst_ptr The address of a pointer to an element.
 * @param del The address of the function used to delete the content
   of the element.
 * @return
 */
void	ft_lstdelone(t_list **lst_ptr, void (*del)(void *))
{
	if (del != NULL)
		del((*lst_ptr)->content);
	ft_free(lst_ptr);
}
