/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_new_front.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 16:33:32 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/09 16:44:43 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_new_front(t_list **lst, void *content)
{
	t_list	*new_lst;

	new_lst = ft_lstnew(content);
	if (new_lst == NULL)
		return (NULL);
	ft_lstadd_front(lst, new_lst);
	return (new_lst);
}
