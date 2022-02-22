/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lst_new_front.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:58:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
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
	massert((char *)new_lst->content, "foo");
	massert((void *)lst, (void *)new_lst);
	massert((void *)lst->next, (void *)old_lst);

	old_lst = lst;
	new_lst = ft_lst_new_front(&lst, strdup("bar"));
	massert((char *)new_lst->content, "bar");
	massert((void *)lst, (void *)new_lst);
	massert((void *)lst->next, (void *)old_lst);

	old_lst = lst;
	new_lst = ft_lst_new_front(&lst, strdup("baz"));
	massert((char *)new_lst->content, "baz");
	massert((void *)lst, (void *)new_lst);
	massert((void *)lst->next, (void *)old_lst);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
