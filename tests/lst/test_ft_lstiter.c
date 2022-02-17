/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstiter.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:02:50 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/17 18:53:42 by sbos          ########   odam.nl         */
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

	ASSERT((char *)lst->content, "xoo");
	ASSERT((char *)lst->next->content, "xar");
	ASSERT((char *)lst->next->next->content, "xaz");
	ASSERT((void *)lst->next->next->next, NULL);

	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
