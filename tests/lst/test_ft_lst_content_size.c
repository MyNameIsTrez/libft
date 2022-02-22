/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_content_size.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:37:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

typedef size_t	(*t_size_fn)(const void *);

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_content_size)
{
	t_list	*lst;

	lst = NULL;

	massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 0);

	ft_lst_new_back(&lst, strdup("foo"));
	massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 3);

	ft_lst_new_back(&lst, strdup("bar"));
	massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 6);

	ft_lst_new_back(&lst, strdup("baz"));
	massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 9);

	ft_lstclear(&lst, free);
}

////////////////////////////////////////////////////////////////////////////////
