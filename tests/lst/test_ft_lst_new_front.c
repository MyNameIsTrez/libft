/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_front.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:58:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 19:01:02 by sbos          ########   odam.nl         */
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
	new_lst = ft_lst_new_front(&lst, strdup("foo"));
	ASSERT((char *)new_lst->content, "foo");
	ASSERT((void *)lst, (void *)new_lst);
	ASSERT((void *)lst->next, (void *)old_lst);

	old_lst = lst;
	new_lst = ft_lst_new_front(&lst, strdup("bar"));
	ASSERT((char *)new_lst->content, "bar");
	ASSERT((void *)lst, (void *)new_lst);
	ASSERT((void *)lst->next, (void *)old_lst);

	old_lst = lst;
	new_lst = ft_lst_new_front(&lst, strdup("baz"));
	ASSERT((char *)new_lst->content, "baz");
	ASSERT((void *)lst, (void *)new_lst);
	ASSERT((void *)lst->next, (void *)old_lst);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
