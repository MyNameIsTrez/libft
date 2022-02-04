/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_content_size.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/09 12:16:47 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/09 12:44:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lst_content_size(t_list *lst, size_t (*counter)(const void *content))
{
	size_t	size;

	size = 0;
	while (lst != NULL)
	{
		size += counter(lst->content);
		lst = lst->next;
	}
	return (size);
}
