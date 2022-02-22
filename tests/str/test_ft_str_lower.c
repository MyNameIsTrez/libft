/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_str_lower.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/05 14:33:37 by sbos          #+#    #+#                 */
/*   Updated: 2022/02/22 14:33:52 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_str_lower)
{
	{
		char	*tested = ft_str_lower(strdup("FOO"));
		massert(tested, "foo");
		free(tested);
	}

	{
		char	*tested = ft_str_lower(strdup("foo"));
		massert(tested, "foo");
		free(tested);
	}

	{
		char	*tested = ft_str_lower(strdup("$"));
		massert(tested, "$");
		free(tested);
	}
}

////////////////////////////////////////////////////////////////////////////////
