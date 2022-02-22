/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_lstadd_front.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 18:20:41 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/05 18:21:07 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_lstadd_front)
{
	t_list	*lst;

	lst = NULL;

	ft_lstadd_front(&lst, ft_lstnew("foo"));
	ft_lstadd_front(&lst, ft_lstnew("foo"));

	massert(ft_lstsize(lst), 2);

	ft_lstclear(&lst, NULL);
}

////////////////////////////////////////////////////////////////////////////////
