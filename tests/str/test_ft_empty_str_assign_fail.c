/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_ft_empty_str_assign_fail.c                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/25 20:13:08 by sbos          #+#    #+#                 */
/*   Updated: 2022/03/04 14:58:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

////////////////////////////////////////////////////////////////////////////////

#include "tests.h"

////////////////////////////////////////////////////////////////////////////////

Test(ft_empty_str_assign_fail)
{
	size_t	i;
	char	*str;

	str = NULL;
	// TODO: Replace this with a less janky test.
	// This test isn't guaranteed to work, cause memory is often initialized to 0.
	i = 0;
	while (i < 1e3)
	{
		massert(ft_empty_str_assign_fail(&str), (bool)false);
		massert(str[0], (char)'\0');
		free(str);
		str = NULL;
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////
