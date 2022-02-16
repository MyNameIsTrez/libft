/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_back.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:56:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:24:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_new_back)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_back(&lst, strdup("foo"));
	ASSERT((char *)lst->content, "foo");

	ft_lst_new_back(&lst, strdup("bar"));
	ASSERT((char *)lst->next->content, "bar");

	ft_lst_new_back(&lst, strdup("baz"));
	ASSERT((char *)lst->next->next->content, "baz");

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
