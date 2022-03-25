/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_content_size.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:37:13 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/25 17:44:35 by sbos          ########   odam.nl         */
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
	int		has_been_unstable = 0;

	lst = NULL;

	massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 0);

	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("foo")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable or was_malloc_unstable;
	if (not has_been_unstable)
		massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 3);

	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("bar")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable or was_malloc_unstable;
	if (not has_been_unstable)
		massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 6);

	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("baz")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable or was_malloc_unstable;
	if (not has_been_unstable)
		massert((int)ft_lst_content_size(lst, (t_size_fn) &(ft_strlen)), 9);

	ft_lstclear(&lst, free);
}

////////////////////////////////////////////////////////////////////////////////
