/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstdelone.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 19:00:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:25:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

// static void	free_content(void *content)
void	free_content(void *content)
{
	ft_free(content);
}

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstdelone)
{
	char	*foo;
	t_list	*lst;

	foo = malloc(4);
	foo[0] = 'b';
	foo[1] = 'a';
	foo[2] = 'r';
	foo[3] = '\0';
	lst = ft_lstnew(foo);
	ASSERT((char *)lst->content, "bar");
	ft_lstdelone(lst, free_content);
}

////////////////////////////////////////////////////////////////////////////////
