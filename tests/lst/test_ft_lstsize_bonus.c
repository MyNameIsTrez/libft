/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstsize_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 17:26:44 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 18:19:15 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

void	test_ft_lstsize(void)
{
	t_list	*lst;

	lst = NULL;

	ft_lst_new_front(&lst, "foo");
	ft_lst_new_front(&lst, "foo");

	ASSERT_INT(ft_lstsize(lst), 2);

	ft_lstclear(&lst, NULL);
}

////////////////////////////////////////////////////////////////////////////////

// Test(ft_lstsize, basic_test, .timeout=5)
// Test(ft_lstsize, basic_test)
// {
// }

// Test(ft_lstsize, tail_recursion, .timeout=1)
// {
// 	t_list	*lst = NULL;

// 	ft_lst_new_front(&lst, "foo");
// 	// lst->next = lst;
// 	ft_lstsize(lst);
// 	ft_lstdelone(lst, NULL);
// }
