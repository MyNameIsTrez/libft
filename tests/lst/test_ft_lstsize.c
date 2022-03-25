/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstsize.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:26:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 18:19:15 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstsize)
{
	t_list	*lst;
	int		has_been_unstable = 0;

	lst = NULL;

	m_safe_assert(void *, ft_lst_new_front(&lst, "foo"), lst, NULL);
	has_been_unstable = has_been_unstable || was_malloc_unstable;
	m_safe_assert(void *, ft_lst_new_front(&lst, "foo"), lst, NULL);
	has_been_unstable = has_been_unstable || was_malloc_unstable;

	if (!has_been_unstable)
		massert(ft_lstsize(lst), 2);

	ft_lstclear(&lst, NULL);
}

////////////////////////////////////////////////////////////////////////////////
