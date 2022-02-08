/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_content_size.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:37:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/08 17:12:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

typedef size_t	(*t_size_fn)(const void *);

////////////////////////////////////////////////////////////////////////////////

void	test_ft_lst_content_size(void)
{
	t_list	*lst;

	lst = NULL;

	ASSERT((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 0);

	ft_lst_new_back(&lst, strdup("foo"));
	ASSERT((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 3);

	ft_lst_new_back(&lst, strdup("bar"));
	ASSERT((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 6);

	ft_lst_new_back(&lst, strdup("baz"));
	ASSERT((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 9);

	ft_lstclear(&lst, free);
}

////////////////////////////////////////////////////////////////////////////////
