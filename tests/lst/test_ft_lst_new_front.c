/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_front.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:58:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:24:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_new_front)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_front(&lst, strdup("foo"));
	ASSERT((char *)lst->content, "foo");

	ft_lst_new_front(&lst, strdup("bar"));
	ASSERT((char *)lst->content, "bar");

	ft_lst_new_front(&lst, strdup("baz"));
	ASSERT((char *)lst->content, "baz");

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
