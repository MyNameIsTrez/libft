/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstadd_back.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:16:35 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 18:19:36 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstadd_back)
{
	t_list	*lst;
	t_list	*new;
	int		has_been_unstable = 0;

	lst = NULL;

	m_safe_assert(void *, new = ft_lstnew("foo"), new, NULL);
	has_been_unstable = has_been_unstable or was_malloc_unstable;
	ft_lstadd_back(&lst, new);
	m_safe_assert(void *, new = ft_lstnew("foo"), new, NULL);
	has_been_unstable = has_been_unstable or was_malloc_unstable;
	ft_lstadd_back(&lst, new);

	if (not has_been_unstable)
		massert(ft_lstsize(lst), 2);

	ft_lstclear(&lst, NULL);
}

////////////////////////////////////////////////////////////////////////////////
