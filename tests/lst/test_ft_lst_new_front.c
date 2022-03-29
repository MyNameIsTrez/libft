/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_front.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:58:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 15:58:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_new_front)
{
	t_list	*lst;
	t_list	*new_lst;
	t_list	*old_lst;

	lst = NULL;

	old_lst = lst;
	m_safe_assert(void *, new_lst = ft_lst_new_front(&lst, strdup("foo")), new_lst, NULL);
	if (NOT was_malloc_unstable)
	{
		massert((char *)new_lst->content, "foo");
		massert((void *)lst, (void *)new_lst);
		massert((void *)lst->next, (void *)old_lst);
	}

	old_lst = lst;
	m_safe_assert(void *, new_lst = ft_lst_new_front(&lst, strdup("bar")), new_lst, NULL);
	if (NOT was_malloc_unstable)
	{
		massert((char *)new_lst->content, "bar");
		massert((void *)lst, (void *)new_lst);
		massert((void *)lst->next, (void *)old_lst);
	}

	old_lst = lst;
	m_safe_assert(void *, new_lst = ft_lst_new_front(&lst, strdup("baz")), new_lst, NULL);
	if (NOT was_malloc_unstable)
	{
		massert((char *)new_lst->content, "baz");
		massert((void *)lst, (void *)new_lst);
		massert((void *)lst->next, (void *)old_lst);
	}

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
