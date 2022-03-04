/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstnew.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:04:23 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 15:37:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstnew)
{
	char	foo[] = "bar";

	t_list	*lst = ft_lstnew(foo);

	massert((char *)lst->content, "bar");
	massert((void *)lst->next, NULL);

	ft_free(&lst);
}

////////////////////////////////////////////////////////////////////////////////
