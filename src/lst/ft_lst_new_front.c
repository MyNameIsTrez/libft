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

#include "src/lst/ft_lst.h"

t_list	*ft_lst_new_front(t_list **lst_ptr, void *content, char *description)
{
	t_list	*new_lst;

	new_lst = ft_lstnew(content, description);
	if (new_lst == NULL)
		return (NULL);
	ft_lstadd_front(lst_ptr, new_lst);
	return (new_lst);
}
