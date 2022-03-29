/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstlast.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:02:57 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/29 16:02:31 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstlast)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_back(&lst, strdup("foo"));
	ft_lst_new_back(&lst, strdup("bar"));

	t_list *last = ft_lstnew(strdup("baz"));
	ft_lstadd_back(&lst, last);

	if (lst != NULL AND last != NULL)
		massert((void *)ft_lstlast(lst), (void *)last);
	ft_lstclear(&lst, &free);
}

////////////////////////////////////////////////////////////////////////////////
