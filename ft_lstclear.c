/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:03 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/03 15:31:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes the content of and frees @p lst and all of its successors.
 *
 * @param lst
 * @param del
 * @return
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	while (*lst != NULL)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
}
