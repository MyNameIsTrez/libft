/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_remove_if.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/09 17:35:55 by sbos          #+#    #+#                 */
/*   Updated: 2022/12/09 17:35:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "libft.h"

////////////////////////////////////////////////////////////////////////////////

void	ft_lst_remove_if(t_list **lst, void *needle,
			int (*cmp_fn)(void *content, void *needle))
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	prev = NULL;
	current = *lst;
	while (current != NULL)
	{
		if (cmp_fn(current->content, needle) == 0)
		{
			if (prev == NULL)
				*lst = current->next;
			else
				prev->next = current->next;
			next = current->next;
			ft_free(&current);
			current = next;
		}
		prev = current;
		if (current != NULL)
			current = current->next;
	}
}

////////////////////////////////////////////////////////////////////////////////
