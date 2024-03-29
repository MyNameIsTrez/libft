/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:40:52 by sbos          #+#    #+#                 */
/*   Updated: 2021/11/15 18:14:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "src/allocating/ft_allocating.h"
#include "src/lst/ft_lst.h"

/**
 * @brief Creates a new list initialized with @p content.
 *
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list	*ft_lstnew(void *content, char *description)
{
	t_list	*lst;

	lst = ft_malloc(1, sizeof(t_list), description);
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
