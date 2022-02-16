/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_repeat.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 12:44:58 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/16 14:22:55 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_str_repeat)
{
	{
		ASSERT(ft_str_repeat(strdup(""), 0), "");
		ASSERT(ft_str_repeat(strdup("foo"), 0), "");
	}
	{
		ASSERT(ft_str_repeat(strdup(""), 1), "");
		ASSERT(ft_str_repeat(strdup("foo"), 1), "foo");
	}
	{
		ASSERT(ft_str_repeat(strdup(""), 2), "");
		ASSERT(ft_str_repeat(strdup("foo"), 2), "foofoo");
	}
}

////////////////////////////////////////////////////////////////////////////////
