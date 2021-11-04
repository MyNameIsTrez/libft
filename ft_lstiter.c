/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:58 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:28:10 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Runs the function @p fun
 *        on the content of @p lst and all of its successors.
 *
 * @param lst
 * @param fun
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
