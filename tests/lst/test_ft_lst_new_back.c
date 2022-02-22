/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_back.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:56:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lst_new_back)
{
	t_list	*lst;
	t_list	*new_lst;

	lst = NULL;

	new_lst = ft_lst_new_back(&lst, strdup("foo"));
	massert((char *)new_lst->content, "foo");
	massert((void *)lst, (void *)new_lst);

	new_lst = ft_lst_new_back(&lst, strdup("bar"));
	massert((char *)new_lst->content, "bar");
	massert((void *)lst->next, (void *)new_lst);

	new_lst = ft_lst_new_back(&lst, strdup("baz"));
	massert((char *)new_lst->content, "baz");
	massert((void *)lst->next->next, (void *)new_lst);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
