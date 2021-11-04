/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:01 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:29:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/**
 * @brief Deletes the content of a single @p lst using @p del,
 *        and then frees lst.
 *
 * @param lst
 * @param del
 * @return
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != NULL)
		del(lst->content);
	free(lst);
}
