/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_reverse.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:08:35 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 18:44:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_reverse)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_back(&lst, strdup("foo"));
	ft_lst_new_back(&lst, strdup("bar"));
	ft_lst_new_back(&lst, strdup("baz"));

	ft_lst_reverse(&lst);
	ASSERT((char *)lst->content, "baz");
	ASSERT((char *)lst->next->content, "bar");
	ASSERT((char *)lst->next->next->content, "foo");
	ASSERT((void *)lst->next->next->next, NULL);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
