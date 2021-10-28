/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/11 12:41:01 by sbos          #+#    #+#                 */
/*   Updated: 2021/10/11 16:38:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

/**
 * Frees a pointer and sets it to NULL
 * @param p actually a void **
 * @return NULL
 */
static void	*ft_free(void *p)
{
	void	**pp;

	pp = (void **)p;
	free(*pp);
	*pp = NULL;
	return (NULL);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	ft_free(&lst);
}
