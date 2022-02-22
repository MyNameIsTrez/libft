/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstiter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:02:50 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

static void foo(void *content)
{
	char *s = content;
	s[0] = 'x';
}

Test(ft_lstiter)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_back(&lst, strdup("foo"));
	ft_lst_new_back(&lst, strdup("bar"));
	ft_lst_new_back(&lst, strdup("baz"));

	ft_lstiter(lst, foo);

	massert((char *)lst->content, "xoo");
	massert((char *)lst->next->content, "xar");
	massert((char *)lst->next->next->content, "xaz");
	massert((void *)lst->next->next->next, NULL);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
