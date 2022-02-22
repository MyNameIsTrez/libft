/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_reverse.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:08:35 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
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
	massert((char *)lst->content, "baz");
	massert((char *)lst->next->content, "bar");
	massert((char *)lst->next->next->content, "foo");
	massert((void *)lst->next->next->next, NULL);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
