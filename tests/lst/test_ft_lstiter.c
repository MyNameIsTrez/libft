/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstiter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:02:50 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:03:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

static void foo(void *content)
{
	char *s = content;
	s[0] = 'x';
}

Test(ft_lstiter)
{
	t_list	*lst;
	int		has_been_unstable = 0;

	lst = NULL;

	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("foo")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable OR was_malloc_unstable;
	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("bar")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable OR was_malloc_unstable;
	m_safe_assert(void *, ft_lst_new_back(&lst, strdup("baz")), ft_lstlast(lst), NULL);
	has_been_unstable = has_been_unstable OR was_malloc_unstable;

	ft_lstiter(lst, foo);

	if (NOT has_been_unstable)
	{
		massert((char *)lst->content, "xoo");
		massert((char *)lst->next->content, "xar");
		massert((char *)lst->next->next->content, "xaz");
		massert((void *)lst->next->next->next, NULL);
	}

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
